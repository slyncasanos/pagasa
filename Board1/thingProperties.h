// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "1c6a56f6-141c-450d-8a47-ab3445545e7a";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onHumidityChange();
void onRainfallChange();
void onTemperatureChange();

float humidity;
float rainfall;
float temperature;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(humidity, READWRITE, ON_CHANGE, onHumidityChange);
  ArduinoCloud.addProperty(rainfall, READWRITE, ON_CHANGE, onRainfallChange);
  ArduinoCloud.addProperty(temperature, READWRITE, ON_CHANGE, onTemperatureChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
