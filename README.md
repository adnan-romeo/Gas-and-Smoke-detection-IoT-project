# Gas-and-Smoke-detection-IoT-project
# Arduino MQ2 Smoke & Gas Detector

A simple, effective Arduino-based smoke and gas detection system. This project uses an MQ2 sensor to monitor the air quality. When smoke or combustible gases cross a defined threshold, the system triggers a visual (LED) and auditory (Buzzer) alarm.

## Features
* **Real-time Monitoring:** Continuously reads air quality levels using the MQ2 sensor.
* **Instant Alerts:** Triggers a blinking LED and a continuous buzzer when smoke is detected.
* **Adjustable Sensitivity:** Uses the analog output of the MQ2 sensor (or active-low digital output) to allow for precise threshold tuning.

## Components Required
* 1x Arduino Uno (or compatible board)
* 1x MQ2 Gas/Smoke Sensor Module
* 1x Active Buzzer
* 1x LED (Any color, e.g., Red for alerts)
* 1x 220-ohm Resistor (for the LED)
* Jumper wires
* Breadboard

## Pin Configuration (Wiring)

| Component | Arduino Pin | Notes |
| :--- | :--- | :--- |
| **MQ2 Sensor (A0)** | `A0` (Analog) or `D4` | Use A0 for precise threshold control, or D4 for digital logic. |
| **MQ2 VCC** | `5V` | Powers the sensor and internal heater. |
| **MQ2 GND** | `GND` | Ground connection. |
| **Buzzer (+)** | `Pin 5` | Output for the auditory alarm. |
| **Buzzer (-)** | `GND` | Ground connection. |
| **LED (+ / Anode)** | `Pin 6` | Output for the visual alarm. |
| **LED (- / Cathode)**| `GND` | Connect via a 220Ω resistor to Ground. |
