# ESP32_Serial_WiFi
Send Serial UART messages over WiFi

You can connect your ESP32 with this Code to any other ESP32, ESP8266, Arduino or STM32 Project to send yourself Serial-Messages via Serial.println().

Setup:
  1. compile this code and program your ESP32(i did it with platformio.io)
  2. connect your gpio pins  RXD2-16 TXD2-17 to the other device.
     tx--->rx      rx--->tx
  3.  Configure the UART on the other Device
  4.  Send yourself Messages over Serial.println(), Serial.print() or whatever

You can use this Messages for debugging or testing your Device, without the needing of long USB Cables or Whatever.

You could add this Code to your existing Project, but for me i dont want to run all of this extra code, and sometimes i use the Wlan for other things,
so i would get an extra ESP32 for this code.
