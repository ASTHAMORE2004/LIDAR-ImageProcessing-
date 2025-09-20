#include <Wire.h>
#include <VL53L1X.h>

VL53L1X lidar;

void setup() {
  Serial.begin(115200);
  Wire.begin(); // Default SDA/SCL for ESP32: GPIO21 and GPIO22

  // Initialize the sensor
  lidar.setTimeout(500);
  if (!lidar.init()) {
    Serial.println("VL53L1X not detected. Check wiring.");
    while (1);
  }

  // Configure sensor
  lidar.setDistanceMode(VL53L1X::Long); // Options: Short, Medium, Long
  lidar.setMeasurementTimingBudget(50000); // in microseconds
  lidar.startContinuous(50); // 50ms between readings
}

void loop() {
  int distance = lidar.read(); // Read distance in mm

  if (lidar.timeoutOccurred()) {
    Serial.println("Sensor timeout!");
  } else {
    Serial.print("Distance (mm): ");
    Serial.println(distance);
  }

  delay(100); // Optional delay
}
