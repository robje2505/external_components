/*
 * Project: Alternative firmware for EleksTube IPS clock
 * Hardware: ESP32
 * File description: User preferences for the complete project
 * Hardware connections and other deep settings are located in "GLOBAL_DEFINES.h"
 */


#ifndef USER_DEFINES_H_
#define USER_DEFINES_H_


#define DEBUG_OUTPUT


// ************* Type of the clock hardware  *************
//#define HARDWARE_Elekstube_CLOCK  // uncomment for the original Elekstube clock
#define HARDWARE_Elekstube_CLOCK_Gen2  // uncomment for the original Elekstube clock Gen2.1 (ESP32 Pico D4 Chip)
//#define HARDWARE_SI_HAI_CLOCK  // uncomment for the SI HAI copy of the clock
//#define HARDWARE_NovelLife_SE_CLOCK  // uncomment for the NovelLife SE version; non-SE not tested
//#define HARDWARE_PunkCyber_CLOCK  // uncomment for the PunkCyber / RGB Glow tube / PCBway clock


// ************* Clock font file type selection (.clk or .bmp)  *************
#define USE_BMP_FILES   // select between .CLK and .BMP images


// ************* Display Dimming / Night time operation *************
#define DIMMING        // uncomment to enable hardware dimming
#define NIGHT_TIME 22  // dim displays at 10 pm 
#define DAY_TIME   7   // full brightness after 7 am
#define BACKLIGHT_DIMMED_INTENSITY  1  // 0..7
#define TFT_DIMMED_INTENSITY  20    // 0..255


// ************* WiFi config *************
#define WIFI_CONNECT_TIMEOUT_SEC  20
#define WIFI_RETRY_CONNECTION_SEC  15
//#define WIFI_USE_WPS                  //uncomment to use WPS instead of hard coded wifi credentials 
#define WIFI_SSID      "Yeet-IoT"       // not needed if WPS is used
#define WIFI_PASSWD    "L7Ameide.IoT"   // not needed if WPS is used.  Caution - Hard coded password is stored as clear text in BIN file


//  *************  Geolocation  *************
// Get your API Key on https://www.abstractapi.com/ (login) --> https://app.abstractapi.com/api/ip-geolocation/tester (key) *************
#define GEOLOCATION_ENABLED    // enable after creating an account and copying Geolocation API below:
#define GEOLOCATION_API_KEY "919c9b05e55a4c1b9b3d8763ec15f80d" 


// ************* MQTT config *************
#define MQTT_ENABLED  // enable after creating an account, setting up the Thermostat device on www.smartnest.cz and filling in all the data below:
#define MQTT_HOME_ASSISTANT // enable if you want Home Assistant support
#define MQTT_HOME_ASSISTANT_DISCOVERY
#define MQTT_HOME_ASSISTANT_DISCOVERY_DEVICE_MANUFACTURER "EleksMaker"
#define MQTT_HOME_ASSISTANT_DISCOVERY_DEVICE_MODEL "Elekstube IPS PR2"
#define MQTT_HOME_ASSISTANT_DISCOVERY_SW_VERSION "0.8 Home Assistant Edition"
#define MQTT_HOME_ASSISTANT_DISCOVERY_HW_VERSION "2.3.04"
#define MQTT_BROKER "192.168.2.156"             // Broker host
#define MQTT_PORT 1883                         // Broker port
#define MQTT_USERNAME "mqtt"             // Username from Smartnest
#define MQTT_PASSWORD "mqtt"              // Password from Smartnest or API key (under MY Account)
#define MQTT_CLIENT "klok1"              // Device Id from Smartnest
#define MQTT_SAVE_PREFERENCES_AFTER_SEC 60

// ************* Optional temperature sensor *************
//#define ONE_WIRE_BUS_PIN   4  // DS18B20 connected to GPIO4; comment this line if sensor is not connected


#endif  // USER_DEFINES_H_
