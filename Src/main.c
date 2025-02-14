/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32 VS Code Extension
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

void delay() {
    for(volatile int i=0; i<100000; ++i)
        ; // do nothing, waste some CPU cycles
}

int main(void)
{
    *(volatile uint32_t *)0x4002104c |= 1 << 1;
    *(volatile uint32_t *)0x48000400 |= 1 << 6;
    *(volatile uint32_t *)0x48000400 &= ~(1 << 7);

    for(;;) {
        *(volatile uint32_t *)0x48000414 ^= 1 << 3;
        delay();
    }
}
