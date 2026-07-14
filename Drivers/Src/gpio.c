#include "gpio.h"

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{
    if (EnorDi)
    {
        if (pGPIOx == GPIOA)
            RCC->AHB1ENR |= (1 << 0);
        else if (pGPIOx == GPIOB)
            RCC->AHB1ENR |= (1 << 1);
    }
}

void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
    GPIO_PeriClockControl(pGPIOHandle->pGPIOx, 1);

    pGPIOHandle->pGPIOx->MODER &= ~(3 << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));

    pGPIOHandle->pGPIOx->MODER |=
        (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode
         << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
}

void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{
}

uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
    return (uint8_t)((pGPIOx->IDR >> PinNumber) & 0x1);
}

void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{
    if (Value)
        pGPIOx->ODR |= (1 << PinNumber);
    else
        pGPIOx->ODR &= ~(1 << PinNumber);
}

void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
    pGPIOx->ODR ^= (1 << PinNumber);
}