#include <Arduino.h>
#include <WiFi.h>

// SSID für das WLAN-Netzwerk
const char* ssid = "WLED_Sync_Beacon";
// Passwort für das WLAN-Netzwerk
const char* password = "wlanvomwels"; 

void setup() {
  Serial.begin(115200);

  Serial.println("Setting up AP mode");

  // Setze das ESP32 in Access Point Mode
  WiFi.softAP(ssid, password);

  // Hole die IP-Adresse des Access Points
  IPAddress IP = WiFi.softAPIP(); 
  Serial.print("AP IP address: ");
  Serial.println(IP);
}

void loop() {
  //no need
}