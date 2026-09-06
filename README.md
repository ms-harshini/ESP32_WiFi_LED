# Day 8: ESP32 WiFi Connect with LED Status Indicator

Part of my **#30DaysArduinoSeries** — a daily IoT/Arduino project series.

## What it does
The ESP32 connects to a WiFi network and gives a visual status update using an onboard LED — no Serial Monitor required:
- **LED blinks** while attempting to connect to WiFi
- **LED turns solid ON** once successfully connected
- **LED turns OFF** if the connection drops

## Hardware
- ESP32 Dev Board
- 1x LED (connected to GPIO 2)
- 220Ω resistor (optional, for current limiting)
- Simulated using [Wokwi](https://wokwi.com)

## Circuit
| Component | ESP32 Pin |
|---|---|
| LED Anode (+) | GPIO 2 |
| LED Cathode (–) | GND (via resistor) |

## Code
See [`main.cpp`](./src/main.cpp) for the full sketch.

Key logic:
```cpp
while (WiFi.status() != WL_CONNECTED) {
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
}
digitalWrite(ledPin, HIGH); // Solid ON = connected
```

## What I learned
- Setting up WiFi on ESP32 using the Arduino framework
- Using `WiFi.status()` to track connection state
- Giving visual feedback with GPIO output instead of relying on Serial output
- Simulating ESP32 projects using Wokwi + PlatformIO in VS Code

## Series
This is Day 8 of my 30-day IoT/Arduino series, exploring microcontrollers, sensors, communication protocols, and cloud integration — one project a day.

#30DaysArduinoSeries #IoT #ESP32 #Arduino #EmbeddedSystems
