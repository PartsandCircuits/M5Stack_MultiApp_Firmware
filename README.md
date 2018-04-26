# M5Stack_MultiApp_Firmware
<br />
<br />

<p align="center">
<img src="https://github.com/PartsandCircuits/M5Stack_MultiApp_Firmware/blob/master/Project_Images/20180407_191741.jpg" height="400">
</p>

<br />
<br />


## About
- A firmware that include several "sketches" as builtin apps
- Can run all included apps without reflashing/rebooting
- The menu images are stored on SdCard so they are customisable

- The project is made on Visual Studio, using VisualMicro plugin.
- The project uses modifed M5Stack and M5StackSAM libraries. 
Make sure you uninstall the original M5Stack and M5Stack libraries from Arduino IDE to avoid conflicts on compile.
- This project is by [Calin](https://github.com/botofancalin) - forked from [here](https://github.com/botofancalin/M5Stack_MultiApp_Firmware)

<br />
<br />

## Included apps:
- The well known Oscilloscope
- Alien Shooter game
- Flappy Bird game
- Wifi Packet Monitor
- Wifi Scanner
- I2C Scanner
- Voltmeter with measurements history
- DHT Temperature and Humidity - Works with any DHT sensor
- System Informations
- Display Backlight settings with values stored on emulated EEPROM
- Stopwatch
- a demo clock... i will do some later work on it or i will just remove it...

<br />
<br />

<p align="center">
<img src="https://github.com/PartsandCircuits/M5Stack_MultiApp_Firmware/blob/master/Project_Images/Apps.png" height="300">

</p>

<br />
<br />

## Installation

Extract Data.zip to M5Stack SDCard root

1. run ESPFlashDownloadTool_v3.6.4.exe
2. Select ESP32 DownloadTool
3. Select firmware File 
4. enter address for file: 0x10000
5. Select the COM PORT on Download tool
6. Hold RESET key pressed on M5Stack
7. Click START on Download Tool and release the Reset key

After flashing, press reset key to start the M5Stack

<br />
<br />

## ESP Flash Download Tool - Settings
<br />
<br />

<p align="center">
<img src="https://github.com/PartsandCircuits/M5Stack_MultiApp_Firmware/blob/master/Precompiled_MultiFirmware/Flasher%20Instructions.jpg" height="800">
</p>

