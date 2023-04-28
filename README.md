# NodeMCU-MAC-Address
This is a simple Arduino sketch that retrieves the MAC address of an ESP8266 device using the ESP8266WiFi library. The code initializes the ESP8266 WiFi module and enters it into station mode. The MAC address is then printed to the serial monitor using the WiFi.macAddress() function, which retrieves the MAC address of the device.

The setup() function is called once at the beginning of the program, where the serial monitor is initialized, and the MAC address is printed to the console. The loop() function runs continuously, but in this case, it is left empty.

Overall, this code is a quick and easy way to obtain the MAC address of an ESP8266 device, making it useful for developers who need to reference the MAC address in various IoT applications.
