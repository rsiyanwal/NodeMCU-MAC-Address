/*
Getting the MAC Address of ESP
*/

/* Including the Libraries */
#include<ESP8266WiFi.h>

/* Run Once */
void setup(){

  // Setup Serial Monitor
  Serial.begin(115200);

  // Putting ESP32 into station mode
  WiFi.mode(WIFI_STA);

  // Printing the MAC address to Serial Monitor
  Serial.print("MAC Address is: ");
  Serial.println(WiFi.macAddress());
  
}

/* Run in a loop */
void loop(){

}
