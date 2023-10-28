#include <WiFi.h>

const char* ssid     = "Serial_AP";  //Name of the Access Point
const char* password = "changeme";   //Password for Access Point

IPAddress local_ip(192,168,0,1);     //Telnet to this IP Adress
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);

const uint ServerPort = 23;          //Telnet Port
WiFiServer Server(ServerPort);

WiFiClient RemoteClient;

#define RXD2 16                      //Serial RX GPIO-Pin
#define TXD2 17                      //Serial TX GPIO-Pin

void setup()
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

  Serial.println("\n[*] Creating AP");

  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  WiFi.softAP(ssid, password);

  Serial.print("\n[+] AP Created with IP Gateway ");
  Serial.println(WiFi.softAPIP());

  Server.begin();
  Serial.print("\n[+] Telnet Server Created ");
}

void loop(){
  RemoteClient = Server.available();
  while (RemoteClient)
  {
    String input = Serial2.readString();
    RemoteClient.print("Serial Read: ");
    RemoteClient.println(input);
  }
}
