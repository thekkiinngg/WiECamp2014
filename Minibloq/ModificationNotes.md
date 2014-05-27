# Modifications to Minibloq IDE for Sparki

## Installation

[Download Installer](http://forum.arcbotics.com/viewtopic.php?f=17&t=949)

## Compilation Issues

Simple build resulted in compiler errors relating to undefined references for the low level i2c drivers (twi):

```shell
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/Sparki.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/Sparki.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SPI.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SPI.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiEEPROM.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiEEPROM.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiWire.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/twi.c" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/twi.c.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -D=ARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x27C2 -DUSB_PID=0x0004 -DUSB_PRODUCT= -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/hard/Sparki.v1.0/lib" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/miniBloq/v1.0" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0"  -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/initBoard.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/initBoard.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=154 -D=ARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x27C2 -DUSB_PID=0x0004 -DUSB_PRODUCT= -I"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/avr-libc" -I"C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/variants/leonardo" -I"C:\apps\miniBloq.v0.81.sparki/hard/Sparki.v1.0/lib" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2" -I"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/miniBloq/v1.0" -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0"  -I"C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/comp2.cpp" -o "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/comp2.cpp.o"
"C:\apps\miniBloq.v0.81.sparki/lang/WinAVR/v20090313/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega32u4 -o"C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/main.cpp.elf" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/Sparki.cpp.o" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiEEPROM.cpp.o" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SPI.cpp.o" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/twi.c.o"  "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/initBoard.cpp.o" "C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/comp2.cpp.o" "C:\apps\miniBloq.v0.81.sparki/cores/Arduino.v1.5.4.r2/avr/obj/mega32u4.a" -L ./ -lm
C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o: In function `TwoWire::write(unsigned char const*, unsigned int)':
C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiWire.cpp:195: undefined reference to `twi_transmit'
C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o: In function `TwoWire::write(unsigned char)':
C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiWire.cpp:177: undefined reference to `twi_transmit'
C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o: In function `TwoWire::endTransmission(unsigned char)':
C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiWire.cpp:140: undefined reference to `twi_writeTo'
C:\apps\miniBloq.v0.81.sparki/work/_temp/comp2/output/SparkiWire.cpp.o: In function `TwoWire::requestFrom(unsigned char, unsigned char, unsigned char)':
C:\apps\miniBloq.v0.81.sparki/libs/Arduino/Sparki/v1.0/SparkiWire.cpp:85: undefined reference to `twi_readFrom'

There are errors.
```

Function references are in `twi.c` which is not included in the build steps.

Tracked down build steps to `$MB_INSTALL/hard/Sparki.v1.0/rel/action.020.0080.SparkiRobot.Arduino.v1.0.rel`

Added a build step to the end of the file (inside the `<build>` tag) for `twc.c`

```xml
<cmd>
    <s>"</s><s>toolsPath::</s>
    <s>/avr-gcc" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD</s>
    <s> -mmcu=</s><s>cpu::</s>
    <s> -DF_CPU=</s><s>clockFreq::</s>
    <s> -DARDUINO=</s><s>arduinoVersion::</s>
    <s> -I"</s> <s>toolsPath::</s>
    <s>" -I"</s><s>corePath::</s>
    <s>" -I"</s><s>corePath::</s><s>/avr-libc</s>
    <s>" -I"</s><s>corePath::</s><s>/variants/</s><s>arduinoVariant::</s>
    <s>" -I"</s><s>componentPath::</s>
    <s>" -I"</s><s>outputPath::</s><s>" </s>
    <s>-I"</s><s>libsPath::</s><s>/Arduino/Sparki/v1.0" </s>

    <s>"</s><s>libsPath::</s><s>/Arduino/Sparki/v1.0/twi.c" -o "</s><s>outputPath::</s><s>/twi.c.o"</s>
</cmd>
```

**Note** `avr-gcc` is used instead of `avr-g++` for this file.  `avr-g++` doesn't properly compile the file.

Modified version of `action.020.0080.SparkiRobot.Arduino.v1.0.rel` is included in this repository. 

## What's missing in the beta

* LCD Print statements
* Serial print statements (`serial0` not defined)

## Adding a new block

### Example: LCD Print

Based on Serial print block.

## Motor Control Issues

Found a new set of motor control libraries to increase functionality

[Forum post](http://forum.arcbotics.com/viewtopic.php?f=17&t=1087)
[Github Repo](https://github.com/robotobyte/Sparki) (go to Arduino Library folder)

Fixes motion control issues, motor calibration

Adds functionality to motors and gripper, 

* Gripper
    - Open gripper (distance)
    - Close gripper (distance)
    - Set spacing (go to position)
* Driving
    - Distances
    - Wait for completion (true/false)
    - Turn in place
    - Turn with radius (car turn)


## New Icons

### Automating Icon Generation

Each icon has four states, each is basically same thing with different background color:

1. Default
2. Hover
3. Pressed
4. Disabled

CorelDraw doesn't make it easy to automate layer exports. 

Image set up with 5 layers:

1. Icon
2. Pressed
3. Hover
4. Disabled
5. Default

Image exported to SVG.

Using msxsl and Imagemagick to try to automate exporting. Initial reference: [Export Layers from SVG files to PNG](http://daniel-albuschat.blogspot.com/2013/03/export-layers-from-svg-files-to-png.html)

msxsl doesn't like CorelDraw's SVG export.  `<!DOCTYPE>` tag links to SVG dtd spec which msxsl isn't able to parse correctly.  

Attempt to use C# to create quick command line utility to automate SVG export.

Proof of concept:

* Loads `LCD.svg` (exported from CorelDraw)
* Hardcodes map of file names to the layers they require 
* Example:

``` C#
outputfiles.Add( "LCDPickerDefault", new List<string> { "Default", "Icon" } );
outputfiles.Add( "LCDPickerHover", new List<string> { "Hover", "Icon" } );
outputfiles.Add( "LCDPickerDisabled", new List<string> { "Disabled", "Icon" } );
outputfiles.Add( "LCDPickerPressed", new List<string> { "Pressed", "Icon" } );
outputfiles.Add( "LCDPickerBlockDefault", new List<string> { "Icon" } );
outputfiles.Add( "LCDPickerBlockDisabled", new List<string> { "Icon" } );
```
* Writes new SVG file
* Invokes Imagemagick to convert SVG into 256x256 px PNG

TODO:

* Add file load for filename/layer preferences -> JSON?
* Overwrite fill colors?



