#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const int ledPin = 2;   // LED connected to GPIO 2

void setup() {
  pinMode(ledPin, OUTPUT);
  WiFi.begin(ssid, password);

  // Blink LED while connecting
  while (WiFi.status() != WL_CONNECTED) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  }

  // Solid ON once connected
  digitalWrite(ledPin, HIGH);
}

void loop() {
  // LED stays solid ON as long as WiFi is connected
  if (WiFi.status() != WL_CONNECTED) {
    digitalWrite(ledPin, LOW);   // LED off if connection drops
  }
}