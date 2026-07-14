# STM32F4 Register-Level Peripheral Driver Library

## Overview

A reusable embedded firmware driver library for the STM32F4 microcontroller developed using Register-Level Programming (Memory-Mapped Registers) without using STM32 HAL GPIO APIs.

This project demonstrates how low-level peripheral drivers are built by directly accessing hardware registers, following a modular driver architecture similar to professional embedded firmware projects.

---

## Features

- Register-level GPIO Driver
- RCC Clock Driver
- GPIO Initialization
- GPIO Input Reading
- GPIO Output Control
- GPIO Pin Toggle
- Modular Driver Architecture
- STM32F4 Memory-Mapped Register Programming

---

## Technologies

- Embedded C
- STM32F4
- Register-Level Programming
- Memory-Mapped Registers
- Git & GitHub

---

## Project Structure

```
Application/
Drivers/
    Inc/
        stm32f407xx.h
        gpio.h
        rcc.h
    Src/
        gpio.c
        rcc.c
README.md
```

---

## Learning Outcomes

- Understanding STM32 peripheral registers
- GPIO configuration
- RCC clock configuration
- Memory-mapped register programming
- Modular embedded firmware development

---

## Future Improvements

- UART Driver
- SPI Driver
- I2C Driver
- Interrupt Support
- Timer Driver

---

## Author

Yashaswini P