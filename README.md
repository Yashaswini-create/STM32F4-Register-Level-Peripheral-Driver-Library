# STM32F4 Peripheral Driver Library using Register-Level Programming

## Overview
This project demonstrates the development of a GPIO peripheral driver for the STM32F4 microcontroller using direct register-level programming without relying on STM32 HAL GPIO APIs.

## Features
- Register-level GPIO programming
- Peripheral Clock (RCC) enable
- GPIO Initialization
- GPIO Read
- GPIO Write
- GPIO Toggle
- LED Blink Application
- Modular Driver Architecture

## Project Structure

STM32F4_Peripheral_Driver_Library
│
├── Drivers
│   ├── Inc
│   │   ├── stm32f407xx.h
│   │   └── gpio.h
│   └── Src
│       └── gpio.c
│
├── Application
│   └── main.c
│
└── README.md

## Technologies
- Embedded C
- STM32F4
- Register-Level Programming
- Memory Mapped I/O
- GPIO Driver Development

## Future Improvements
- UART Driver
- SPI Driver
- I2C Driver
- External Interrupt Driver
- Timer Driver