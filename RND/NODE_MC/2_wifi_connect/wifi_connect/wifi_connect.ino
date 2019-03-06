#include <ESP8266WiFi.h>
#include <ArduinoJson.h>  // mapping output pins
const char* ssid     = "Medialab";
const char* password = "Mediacollege";
static const uint8_t wifiConnecting = D1; // LED indicator wifi status flashing while connecting
static const uint8_t wifiOk = D2; // LED indicator wifi status ON if connected

void setup() {
  Serial.begin(115200); // start serial monitor
  pinMode(wifiConnecting, OUTPUT); // LED indicator wifi status flashing while connecting
  pinMode(wifiOk, OUTPUT); // LED indicator wifi status ON if connected
  digitalWrite(wifiConnecting, LOW); // init off
  digitalWrite(wifiOk, LOW); // init off
  delay(10);
}

void loop() {

  if(WiFi.status() != WL_CONNECTED) {
    wifiConnect();
  }
}

void wifiConnect() { // connect to local network
  int ledState = 0; // flasher
  digitalWrite(wifiOk, LOW);
  digitalWrite(wifiConnecting, HIGH);
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if(ledState == 0) ledState = 1;
    else ledState = 0;
    digitalWrite(wifiConnecting, ledState);
  }
  Serial.println("");
  Serial.print("WiFi connected, IP address: ");
  Serial.println(WiFi.localIP());
  WiFi.printDiag(Serial); // print Wi-Fi diagnostic information
  digitalWrite(wifiConnecting, LOW);
  digitalWrite(wifiOk, HIGH);
}
