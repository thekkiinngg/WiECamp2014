using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Linq;
using System.Diagnostics;

namespace MiniBloq_Icon_Generator
{
	class Program
	{
		static void Main( string[] args )
		{
			XElement svg = XElement.Load( "LCD.svg" );

			Dictionary<string, List<string>> outputfiles = new Dictionary<string, List<string>>();

			outputfiles.Add( "LCDPickerDefault", new List<string> { "Default", "Icon" } );
			outputfiles.Add( "LCDPickerHover", new List<string> { "Hover", "Icon" } );
			outputfiles.Add( "LCDPickerDisabled", new List<string> { "Disabled", "Icon" } );
			outputfiles.Add( "LCDPickerPressed", new List<string> { "Pressed", "Icon" } );
			outputfiles.Add( "LCDPickerBlockDefault", new List<string> { "Icon" } );
			outputfiles.Add( "LCDPickerBlockDisabled", new List<string> { "Icon" } );

			outputfiles.Add( "LCDPrintTextDefault", new List<string> { "Default", "Icon", "IconText" } );
			outputfiles.Add( "LCDPrintTextHover", new List<string> { "Hover", "Icon", "IconText" } );
			outputfiles.Add( "LCDPrintTextDisabled", new List<string> { "Disabled", "Icon", "IconText" } );
			outputfiles.Add( "LCDPrintTextPressed", new List<string> { "Pressed", "Icon", "IconText" } );
			outputfiles.Add( "LCDPrintTextBlockDefault", new List<string> { "Icon", "IconText" } );
			outputfiles.Add( "LCDPrintTextBlockDisabled", new List<string> { "Icon", "IconText" } );

			outputfiles.Add( "LCDPrintNumberDefault", new List<string> { "Default", "Icon", "IconNumber" } );
			outputfiles.Add( "LCDPrintNumberHover", new List<string> { "Hover", "Icon", "IconNumber" } );
			outputfiles.Add( "LCDPrintNumberDisabled", new List<string> { "Disabled", "Icon", "IconNumber" } );
			outputfiles.Add( "LCDPrintNumberPressed", new List<string> { "Pressed", "Icon", "IconNumber" } );
			outputfiles.Add( "LCDPrintNumberBlockDefault", new List<string> { "Icon", "IconNumber" } );
			outputfiles.Add( "LCDPrintNumberBlockDisabled", new List<string> { "Icon", "IconNumber" } );

			outputfiles.Add( "LCDClearDefault", new List<string> { "Default", "IconClear" } );
			outputfiles.Add( "LCDClearHover", new List<string> { "Hover", "IconClear" } );
			outputfiles.Add( "LCDClearDisabled", new List<string> { "Disabled", "IconClear" } );
			outputfiles.Add( "LCDClearPressed", new List<string> { "Pressed", "IconClear" } );
			outputfiles.Add( "LCDClearBlockDefault", new List<string> { "IconClear" } );
			outputfiles.Add( "LCDClearBlockDisabled", new List<string> { "IconClear" } );

			outputfiles.Add( "LCDUpdateDefault", new List<string> { "Default", "IconUpdate" } );
			outputfiles.Add( "LCDUpdateHover", new List<string> { "Hover", "IconUpdate" } );
			outputfiles.Add( "LCDUpdateDisabled", new List<string> { "Disabled", "IconUpdate" } );
			outputfiles.Add( "LCDUpdatePressed", new List<string> { "Pressed", "IconUpdate" } );
			outputfiles.Add( "LCDUpdateBlockDefault", new List<string> { "IconUpdate" } );
			outputfiles.Add( "LCDUpdateBlockDisabled", new List<string> { "IconUpdate" } );

			if( svg != null )
			{
				foreach( KeyValuePair<string, List<string>> kv in outputfiles )
				{
					Console.WriteLine( "File: " + kv.Key );
					XElement newsvg = new XElement( svg );
					IEnumerable<XElement> layers = newsvg.Elements( "{http://www.w3.org/2000/svg}g" );
					Queue<XElement> unwantedlayers = new Queue<XElement>();
					foreach( XElement layer in layers )
					{
						if( layer.Attribute( "id" ) != null )
						{
							if( !kv.Value.Contains( (string)( layer.Attribute( "id" ) ) ) )
							{
								Console.WriteLine( "Removing: " + layer.Attribute( "id" ) );
								unwantedlayers.Enqueue( layer );
							}
						}
					}

					while( unwantedlayers.Count > 0 )
					{
						unwantedlayers.Dequeue().Remove();
					}

					Console.WriteLine( "Writing " + kv.Key + ".svg" );
					newsvg.Save( kv.Key + ".svg" );

					Process process = new Process();
					ProcessStartInfo startinfo = new ProcessStartInfo();
					startinfo.WindowStyle = ProcessWindowStyle.Hidden;
					startinfo.FileName = "cmd.exe";
					startinfo.Arguments = "/C convert -background none -density 100 -resize 256x256 -depth 32 " + kv.Key + ".svg " + kv.Key + ".png";
					process.StartInfo = startinfo;
					process.Start();
				}
			}

			//Console.ReadKey( true );
		}
	}
}
