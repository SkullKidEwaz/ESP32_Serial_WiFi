# ESP32_Serial_WiFi
Send Serial UART messages over WiFi

You can connect your ESP32 with this Code to any other ESP32, ESP8266, Arduino or STM32 Project to send yourself Serial-Messages via Serial.println() over WiFi.

Setup:
  1. compile the main.cpp and program your ESP32(i did it with platformio.io)
  2. connect your gpio pins  RXD2-16 and TXD2-17 to the other device.
     tx--->rx      rx--->tx
  3.  Configure the UART on the other Device
  4.  Send yourself Messages over Serial.println(), Serial.print() or whatever

How to Connect:
  1. Connect your PC with the Configured Access Point(standard-name: Serial_AP, default_password: changeme)
  2. Telnet into your ESP32 (standard-ip: 192.168.0.1, port: 23)
     You can use any Application you want, that can connect to Telnet,
     for newbies i Would recommend Putty on Windows with a simple gui to Connect.
     On Linux Distros(Ubuntu etc.) you can just use your terminal and connect with (telnet 192.168.0.1)
  3. Enjoy 

You can use this Messages for debugging or testing your Device, without the needing of long USB Cables or whatever.

You could add this Code to your existing Project, but for me i dont want to run all of this extra code, and sometimes i use the Wlan for other things,
so i use an extra ESP32 for this code.
