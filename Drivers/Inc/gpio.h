#ifndef GPIO_H_
#define GPIO_H_

#include "stm32f407xx.h"
#include "rcc.h"

/* GPIO Pin Modes */
#define GPIO_MODE_INPUT 0x00
#define GPIO_MODE_OUTPUT 0x01
#define GPIO_MODE_ALT 0x02
#define GPIO_MODE_ANALOG 0x03

/* GPIO Output Types */
#define GPIO_OTYPE_PP 0x00
#define GPIO_OTYPE_OD 0x01

/* GPIO Output Speed */
#define GPIO_SPEED_LOW 0x00
#define GPIO_SPEED_MEDIUM 0x01
#define GPIO_SPEED_FAST 0x02
#define GPIO_SPEED_HIGH 0x03

/* GPIO Pull-up/Pull-down */
#define GPIO_NO_PUPD 0x00
#define GPIO_PULL_UP 0x01
#define GPIO_PULL_DOWN 0x02

typedef struct
{
    uint8_t PinNumber;
    uint8_t Mode;
    uint8_t Speed;
    uint8_t Pull;
    uint8_t OutputType;

} GPIO_Config_t;

void GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_Config_t *GPIO_Config);

void GPIO_WritePin(GPIO_TypeDef *GPIOx, uint8_t PinNumber, uint8_t Value);

uint8_t GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint8_t PinNumber);

void GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint8_t PinNumber);

#endif