# LIDAR-ImageProcessing-
LIDAR based image sending using ESP-32 camera 
# ESP32 LiDAR Image Sensing & Mapping

This project connects an ESP32 microcontroller to a LiDAR sensor (e.g., VL53L1X or LD19) to perform basic image sensing and spatial mapping. It simulates a 2D scan by rotating the sensor and visualizing distance data, useful for robotics, obstacle detection, and environment mapping.

---

## 📦 Features

-  LiDAR-based distance measurement
-  ESP32 integration via I2C or UART
-  Rotational scanning for 2D mapping
-  Serial output for visualization
-  Optional web dashboard or OLED display

---

##  Hardware Requirements

| Component            | Description                          |
|---------------------|--------------------------------------|
| ESP32 Dev Board      | Microcontroller for control & logic |
| VL53L1X or LD19      | LiDAR sensor for distance sensing   |
| Stepper Motor + Driver | For rotating the sensor            |(optional only if robotics usage)
| Power Supply (5V)    | To power ESP32 and peripherals      |(taken from the aptop itself)
| Optional OLED Display| For local visualization             |(laptop)

---

## File Structure(according to VS CODE)

```plaintext
├── src/
│   └── main.ino              # ESP32 firmware
├── assets/
│   └── schematic.png         # Wiring diagram
├── README.md                 # Project documentation
