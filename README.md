# Ambient Light Monitoring System

## Overview
The Ambient Light Monitoring System is an embedded system project designed to measure and monitor surrounding light intensity. The system uses an LDR sensor to sense ambient light levels, and the sensor output is processed by the LPC2129 ARM7 microcontroller.

The analog sensor signal is converted into digital data using an ADC interface. The calculated light intensity percentage is displayed on a 16x2 LCD and monitored through UART communication.

## Features
- Real-time ambient light intensity monitoring
- LDR-based light sensing
- ADC-based analog signal conversion
- Percentage-based light intensity calculation
- LCD display for output visualization
- UART-based serial monitoring

## Hardware Components
- LPC2129 ARM7 Microcontroller
- LDR Sensor
- ADC Interface
- 16x2 LCD Display
- UART Interface
- Power Supply

## Software Requirements
- Embedded C
- Keil µVision IDE
- Flash Magic

## Communication Protocol Used
- **SPI(Serial Peripheral Interface)** – Used for communication between LPC2129 and ADC interface.
- **UART (Universal Asynchronous Receiver Transmitter)** – Used for serial monitoring of ADC values and calculated light intensity.

## Working Principle
1. The LDR sensor detects the surrounding light intensity.
2. The analog output from the sensor is converted into digital data using an ADC interface.
3. The LPC2129 microcontroller processes the ADC value and calculates the light intensity percentage.
4. The calculated intensity value is displayed on the LCD.
5. The sensor readings are transmitted through UART for monitoring.

## System Flow
| Step | Module | Function |
|------|--------|----------|
| 1 | LDR Sensor | Detects the intensity of surrounding light and produces an analog signal |
| 2 | MCP3204 ADC | Converts the analog sensor output into 12-bit digital data |
| 3 | SPI Communication | Transfers ADC data between MCP3204 and LPC2129 microcontroller |
| 4 | LPC2129 ARM7 Microcontroller | Processes ADC data and calculates light intensity percentage |
| 5 | LCD Display | Displays the measured light intensity value |
| 6 | UART Communication | Sends sensor data and calculated intensity values for serial monitoring |

## My Contribution
- Developed embedded firmware using Embedded C.
- Interfaced ADC with LPC2129 for sensor data acquisition.
- Implemented light intensity calculation algorithm.
- Displayed output on LCD and monitored data through UART.

## Applications
- Automatic lighting systems
- Smart home applications
- Energy-efficient lighting control
- Industrial light monitoring systems

## Tools Used
- Keil µVision IDE
- Embedded C
- LPC2129 ARM7 Development Board
