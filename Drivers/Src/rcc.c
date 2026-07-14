#include "rcc.h"

/* Enable GPIOA Clock */
void RCC_GPIOA_CLK_ENABLE(void)
{
    RCC->AHB1ENR |= (1 << 0);
}

/* Enable GPIOB Clock */
void RCC_GPIOB_CLK_ENABLE(void)
{
    RCC->AHB1ENR |= (1 << 1);
}

/* Enable GPIOC Clock */
void RCC_GPIOC_CLK_ENABLE(void)
{
    RCC->AHB1ENR |= (1 << 2);
}

/* Enable GPIOD Clock */
void RCC_GPIOD_CLK_ENABLE(void)
{
    RCC->AHB1ENR |= (1 << 3);
}