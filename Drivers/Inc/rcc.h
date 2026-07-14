#ifndef RCC_H_
#define RCC_H_

#include "stm32f407xx.h"

/* Enable GPIO Peripheral Clock */
void RCC_GPIOA_CLK_ENABLE(void);
void RCC_GPIOB_CLK_ENABLE(void);
void RCC_GPIOC_CLK_ENABLE(void);
void RCC_GPIOD_CLK_ENABLE(void);

#endif