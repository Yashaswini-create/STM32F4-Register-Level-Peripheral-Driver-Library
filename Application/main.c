#include "gpio.h"

int main(void)
{
    GPIO_Handle_t GpioLed;

    GpioLed.pGPIOx = GPIOA;

    GpioLed.GPIO_PinConfig.GPIO_PinNumber = 5;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = 1;

    GPIO_Init(&GpioLed);

    while (1)
    {
        GPIO_ToggleOutputPin(GPIOA, 5);

        for (volatile int i = 0; i < 500000; i++)
            ;
    }
}