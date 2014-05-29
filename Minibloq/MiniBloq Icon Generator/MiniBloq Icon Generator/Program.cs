using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Linq;
using System.Diagnostics;
using System.IO;
using Newtonsoft.Json;

namespace MiniBloq_Icon_Generator
{
	class Program
	{
		static void Main( string[] args )
		{
			bool DebugPrint = false;

			// Check for two command line parameters
			if( args.Length != 2 )
			{
				if( args.Length == 3 )
				{
					if( args[ 0 ] == "-v" )
					{
						DebugPrint = true;
						args = args.Where( s => s != args[ 0 ] ).ToArray();
					}
				}
				else
				{
					Console.WriteLine( "Error: Invalid command line parameters" );
					Console.WriteLine( "Usage: " + Environment.GetCommandLineArgs()[ 0 ] + " <svg file> <json configuration file>" );
					Console.ReadKey( true );
					Environment.Exit( 1 );
				}
			}

			if( DebugPrint )
			{
				Console.WriteLine( "Current working directory: " + Directory.GetCurrentDirectory() );
			}

			// Check to see if svg file exists
			if( !File.Exists( args[ 0 ] ) )
			{
				Console.WriteLine( "Error: Invalid command line parameters" );
				Console.WriteLine( "File \"" + args[ 0 ] + "\" does not exist" );
				Console.ReadKey( true );
				Environment.Exit( 2 );
			}

			// Check to see if json file exists
			if( !File.Exists( args[ 1 ] ) )
			{
				Console.WriteLine( "Error: Invalid command line parameters" );
				Console.WriteLine( "File \"" + args[ 1 ] + "\" does not exist" );
				Console.ReadKey( true );
				Environment.Exit( 3 );
			}

			// Load SVG file
			XElement svg = XElement.Load( args[ 0 ] );

			// Load JSON formatted configuration file
			Dictionary<string, List<string>> outputfiles = JsonConvert.DeserializeObject< Dictionary< string, List<string>>>( File.ReadAllText( args[ 1 ] ) );

			if( svg != null )
			{
				foreach( KeyValuePair<string, List<string>> kv in outputfiles )
				{
					if( DebugPrint )
						Console.WriteLine( "File: " + kv.Key );

					// Create a new copy of the SVG XML tree
					XElement newsvg = new XElement( svg );

					// Layers are defined with the `<g>` tag
					IEnumerable<XElement> layers = newsvg.Elements( "{http://www.w3.org/2000/svg}g" );
					Queue<XElement> unwantedlayers = new Queue<XElement>();

					// Layers to include in the current PNG
					List<string> imagelayers = new List<string>( kv.Value );

					// Search through layers in SVG
					foreach( XElement layer in layers )
					{
						if( layer.Attribute( "id" ) != null )
						{
							if( !imagelayers.Contains( ( string )( layer.Attribute( "id" ) ) ) )
							{
								if( DebugPrint )
									Console.WriteLine( "Removing: " + layer.Attribute( "id" ) );

								// current layer isn't needed, add it to a queue for deletion after processing
								unwantedlayers.Enqueue( layer );
							}
							else
							{
								if( DebugPrint )
									Console.WriteLine( "Keeping: " + layer.Attribute( "id" ) );

								// Layer was found, so no need for search remaining layers for it
								imagelayers.Remove( (string)layer.Attribute( "id" ) );
							}
						}
					}

					// Warn if a layer doesn't exist
					if( imagelayers.Count > 0 )
					{
						Console.WriteLine( "Warning: Not all layers found for " + kv.Key + "\n" );
						Console.WriteLine( "Requested layers: " );

						foreach( string s in imagelayers )
							Console.WriteLine( "\t" + s );

						Console.WriteLine( "" );
						Console.WriteLine( "Available layers: " );

						foreach( XElement layer in layers )
							Console.WriteLine( "\t" + ( string )layer.Attribute( "id" ) );
					}

					// Remove unwanted layers from base SVG
					while( unwantedlayers.Count > 0 )
					{
						unwantedlayers.Dequeue().Remove();
					}

					// save SVG file
					if( DebugPrint )
						Console.WriteLine( "Writing " + kv.Key + ".svg" );
					newsvg.Save( kv.Key + ".svg" );

					// invoke Imagemagick convert to create a PNG from the SVG
					Process process = new Process();
					ProcessStartInfo startinfo = new ProcessStartInfo();
					startinfo.WindowStyle = ProcessWindowStyle.Hidden;
					startinfo.FileName = "cmd.exe";
					startinfo.Arguments = "/C convert -background none -density 100 -resize 256x256 -depth 32 " + kv.Key + ".svg " + kv.Key + ".png";
					process.StartInfo = startinfo;
					process.Start();

					// Wait for convert operation to complete
					if( DebugPrint )
						Console.WriteLine( "Creating " + kv.Key + ".png" );
					process.WaitForExit();

					// delete temporary svg file
					if( DebugPrint )
						Console.WriteLine( "Removing temporary SVG" );
					File.Delete( kv.Key + ".svg" );

					if( DebugPrint )
						Console.WriteLine( "" );
				}
			}

			if( DebugPrint )
			{
				Console.WriteLine( "Press any key to continue..." );
				Console.ReadKey( true );
			}
		}
	}
}
