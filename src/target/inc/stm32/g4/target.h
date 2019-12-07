#pragma once

#define ZC_TIMER TIM6
#define ZC_TIMER_RCC RCC_TIM6
#define ZC_TIMER_IRQ NVIC_TIM6_DAC13_UNDERRUN_IRQ

#define COMMUTATION_TIMER TIM16
#define COMMUTATION_TIMER_RCC RCC_TIM16
#define COMMUTATION_TIMER_IRQ NVIC_TIM1_UP_TIM16_IRQ

#define OVERCURRENT_WATCHDOG_IRQ NVIC_ADC1_2_IRQ
