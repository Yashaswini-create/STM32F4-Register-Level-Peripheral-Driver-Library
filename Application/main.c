#include "../Drivers/Inc/gpio.h"

int main(void)
{
    GPIO_Config_t led;

    /* Enable GPIOA Clock */
    RCC_GPIOA_CLK_ENABLE();

    /* Configure PA5 as Output */
    led.PinNumber = 5;
    led.Mode = GPIO_MODE_OUTPUT;
    led.Speed = GPIO_SPEED_HIGH;
    led.Pull = GPIO_NO_PUPD;
    led.OutputType = GPIO_OTYPE_PP;

    GPIO_Init(GPIOA, &led);

    while (1)
    {
        GPIO_TogglePin(GPIOA, 5);

        for (volatile uint32_t i = 0; i < 500000; i++)
            ;
    }
}