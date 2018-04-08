//include this file into your app file so your app can be called from menu
#include "ESPmDNS.h"
#include "SPIFFS.h"
#include "WiFiUdp.h"
#include "lib/M5Stack/M5Stack.h"
#include "Wire.h"
#include "EEPROM.h"
#include "lib/M5StackSAM/M5StackSAM.h"
#include "WebServer.h"
#include "esp_wifi.h"
#include "esp_wps.h"
#include "lib\M5Stack\utility\/DHTesp.h"
#include "ArduinoOTA.h"
// add system global variables here to be seen from all files

#define EEPROM_SIZE 64
static bool OtaRunning = false;

// add app external call function here to be able to call it from menu
void appOta();
void appAbout();
void appListGames();
void appListTools();
void appSysInfo();
void appSleep();
void appCfgBrigthness();
void appReturn();

void appI2CScanner();
void WiFiScanner_run();
void Monitor_run();
void Dht_Run();

void spaceShootest_run();
void flappypird_run();

void meters_setup();
void meters_run();

void appStopWatch();
void appOsciloscope();

void clock_setup();
void clock_run();
