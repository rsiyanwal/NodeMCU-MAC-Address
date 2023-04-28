/*
To obtain the MAC address of NodeMCU, it must be connected to the Arduino IDE via a USB type-B cable. 
After connecting NodeMCU to the system, we need to configure it to work with the Arduino IDE, allowing us to run programs on it. 
This involves installing a separate board manager for NodeMCU and including the ESP8266WiFi.h preprocessing directive at the beginning of the code. 
The available board managers are esp32 and esp8266, both of which are provided by Espressif Systems and ESP8266 Community.
*/

// Including the Libraries
#include<ESP8266WiFi.h>

/*
The two primary functions of an Arduino sketch are setup() and loop(). 
The setup() function is used to perform one-time initialization tasks, such as obtaining the MAC address. 
On the other hand, the loop() function is used to repeatedly execute a block of code, typically to send sensor data at regular intervals.
*/
void setup(){

  // Setup Serial Monitor
  Serial.begin(115200);

  /*
  The WiFi mode is configured to Station mode. This enables the NodeMCU to access the WiFi network and transmit and receive data.
  */
  WiFi.mode(WIFI_STA);

  /*
  The MAC address of NodeMCU can be obtained using the pre-defined function WiFi.macAddress() in the script. 
  This address can then be stored in a variable if needed.
  */
  Serial.print("MAC Address is: ");
  Serial.println(WiFi.macAddress());
  
}

/* Run in a loop */
void loop(){
  // Empty
}
