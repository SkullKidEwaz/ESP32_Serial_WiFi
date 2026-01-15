# ESP32_Serial_WiFi

# This Project is no longer active, I work on a (in my opinion) better tool which is available at:
# https://github.com/dominik-ewers-solutions/mcu_ble_terminal_app
# MCU BLE Terminal uses a nice Terminal like App, Connection over BLE is Better, Works like the Serial.print();

Send Serial UART messages over WiFi

You can connect your ESP32 with this Code to any other ESP32, ESP8266, Arduino or STM32 Project to send yourself Serial-Messages via Serial.println() over WiFi.

Setup:
  1. Program your ESP32
  2. connect your gpio pins  RXD2-16 and TXD2-17 to the other device.
     tx--->rx      rx--->tx
     and connect it to power of course.
  3.  Configure the UART on the other Device
  4.  Send yourself Messages over Serial.println(), Serial.print() or whatever on the other Device

How to Connect:
  1. Connect your PC with the Configured Access Point(standard-name: Serial_AP, default_password: changeme)
  2. Telnet into your ESP32 (standard-ip: 192.168.0.1, port: 23)
     You can use any Application you want, that can connect to Telnet,
     for newbies i Would recommend Putty on Windows with a simple gui to Connect.
     On Linux Distros(Ubuntu etc.) you can just use your terminal and connect with (telnet 192.168.0.1)
  3. Enjoy 

You can use this Messages for debugging, Sensor data or test your Device, without the needing of USB Cables.

You could add this Code to your existing Project, but for me i dont want to run all of this extra code, and sometimes i use the Wlan for other things,
so i use an extra ESP32 with this code running.

This Project is Written in Visual Studio Code with platformio addon.
