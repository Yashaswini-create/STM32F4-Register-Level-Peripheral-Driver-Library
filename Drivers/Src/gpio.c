#include "gpio.h"

void GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_Config_t *GPIO_Config)
{
    /* Configure Pin Mode */
    GPIOx->MODER &= ~(0x3 << (2 * GPIO_Config->PinNumber));
    GPIOx->MODER |= (GPIO_Config->Mode << (2 * GPIO_Config->PinNumber));

    /* Configure Output Type */
    GPIOx->OTYPER &= ~(0x1 << GPIO_Config->PinNumber);
    GPIOx->OTYPER |= (GPIO_Config->OutputType << GPIO_Config->PinNumber);

    /* Configure Speed */
    GPIOx->OSPEEDR &= ~(0x3 << (2 * GPIO_Config->PinNumber));
    GPIOx->OSPEEDR |= (GPIO_Config->Speed << (2 * GPIO_Config->PinNumber));

    /* Configure Pull-up/Pull-down */
    GPIOx->PUPDR &= ~(0x3 << (2 * GPIO_Config->PinNumber));
    GPIOx->PUPDR |= (GPIO_Config->Pull << (2 * GPIO_Config->PinNumber));
}

void GPIO_WritePin(GPIO_TypeDef *GPIOx, uint8_t PinNumber, uint8_t Value)
{
    if (Value)
        GPIOx->ODR |= (1 << PinNumber);
    else
        GPIOx->ODR &= ~(1 << PinNumber);
}

uint8_t GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint8_t PinNumber)
{
    return (GPIOx->IDR >> PinNumber) & 0x1;
}

void GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint8_t PinNumber)
{
    GPIOx->ODR ^= (1 << PinNumber);
}