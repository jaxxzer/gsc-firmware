#pragma once

/*
 * timer allocation
 * TIM1 bridge
 * TIM2
 * TIM3 pwm-input
 * TIM14 zero cross
 * TIM16 commutation
 * TIM17
 */

#define LED_GPIO_RCC RCC_GPIOA
#define LED_GPIO_PORT GPIOA
#define LED_GPIO_PIN GPIO0

#define DBG0_GPIO_RCC RCC_GPIOA
#define DBG0_GPIO_PORT GPIOA
#define DBG0_GPIO_PIN GPIO5

#define DBG1_GPIO_RCC RCC_GPIOA
#define DBG1_GPIO_PORT GPIOA
#define DBG1_GPIO_PIN GPIO7

#define DBG2_GPIO_RCC RCC_GPIOB
#define DBG2_GPIO_PORT GPIOB
#define DBG2_GPIO_PIN GPIO7 // conflicts with usart rx

#define CONSOLE_USART USART1
#define CONSOLE_USART_RCC RCC_USART1
#define CONSOLE_TX_GPIO_AF GPIO_AF0
#define CONSOLE_TX_GPIO_RCC RCC_GPIOB
#define CONSOLE_TX_GPIO_PORT GPIOB
#define CONSOLE_TX_GPIO_PIN GPIO6

#define PWM_INPUT_GPIO_RCC RCC_GPIOA
#define PWM_INPUT_GPIO_PORT GPIOA
#define PWM_INPUT_GPIO_PIN GPIO6
#define PWM_INPUT_GPIO_AF GPIO_AF1

#define PWM_INPUT_TIMER_RCC RCC_TIM3
#define PWM_INPUT_TIMER TIM3
#define PWM_INPUT_TIMER_IC_ID_RISE TIM_IC1
#define PWM_INPUT_TIMER_IC_ID_FALL TIM_IC2
#define PWM_INPUT_TIMER_IC_TRIGGER TIM_IC_IN_TI1
#define PWM_INPUT_TIMER_OC_ID_FALL TIM_OC2
#define PWM_INPUT_TIMER_SLAVE_MODE TIM_SMCR_SMS_RM
#define PWM_INPUT_TIMER_SLAVE_TRIGGER TIM_SMCR_TS_TI1FP1
#define PWM_INPUT_DUTY_CCR TIM_CCR2
#define PWM_INPUT_PERIOD_CCR TIM_CCR1

#define BRIDGE_GPIO_AF GPIO_AF2

#define BRIDGE_HI_A_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_A_GPIO_PORT GPIOA
#define BRIDGE_HI_A_GPIO_PIN GPIO8

#define BRIDGE_HI_B_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_B_GPIO_PORT GPIOA
#define BRIDGE_HI_B_GPIO_PIN GPIO9

#define BRIDGE_HI_C_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_C_GPIO_PORT GPIOA
#define BRIDGE_HI_C_GPIO_PIN GPIO10

#define BRIDGE_LO_A_GPIO_RCC RCC_GPIOB
#define BRIDGE_LO_A_GPIO_PORT GPIOB
#define BRIDGE_LO_A_GPIO_PIN GPIO13

#define BRIDGE_LO_B_GPIO_RCC RCC_GPIOB
#define BRIDGE_LO_B_GPIO_PORT GPIOB
#define BRIDGE_LO_B_GPIO_PIN GPIO14

#define BRIDGE_LO_C_GPIO_RCC RCC_GPIOB
#define BRIDGE_LO_C_GPIO_PORT GPIOB
#define BRIDGE_LO_C_GPIO_PIN GPIO15

#define COMPARATOR_A_GPIO_RCC RCC_GPIOF
#define COMPARATOR_A_GPIO_PORT GPIOF
#define COMPARATOR_A_GPIO_PIN GPIO1
#define COMPARATOR_B_GPIO_RCC RCC_GPIOF
#define COMPARATOR_B_GPIO_PORT GPIOF
#define COMPARATOR_B_GPIO_PIN GPIO0
#define COMPARATOR_C_GPIO_RCC RCC_GPIOB
#define COMPARATOR_C_GPIO_PORT GPIOB
#define COMPARATOR_C_GPIO_PIN GPIO1

#define COMPARATOR_ZC_IRQ NVIC_ADC_COMP_IRQ
#define COMPARATOR_BLANK_TIMER_RCC RCC_TIM17
#define COMPARATOR_BLANK_TIMER TIM17
#define COMPARATOR_BLANK_IRQ NVIC_TIM17_IRQ

// TODO from the F0A datasheet: each unused gpio should be programed to output mode low by software after startup
