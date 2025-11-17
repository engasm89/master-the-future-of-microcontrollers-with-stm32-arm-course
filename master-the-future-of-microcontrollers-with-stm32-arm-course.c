#include <stdio.h> // Include I/O for STM32 logs
#include <stdint.h> // Include fixed-width types

// Simulated RCC and GPIO config (STM32 style)
volatile uint32_t RCC_AHBENR = 0; // RCC AHB enable register
volatile uint32_t GPIO_MODER = 0; // GPIO mode register

#define RCC_AHBENR_GPIO_EN (1u << 0) // Enable GPIO clock
#define GPIO_MODER_OUTPUT (1u << 0) // Set pin as output

int main(void) { // Entry
  printf("Master the Future of Microcontrollers with STM32 ARM Course\n"); // Title
  RCC_AHBENR |= RCC_AHBENR_GPIO_EN; // Enable GPIO clock
  GPIO_MODER |= GPIO_MODER_OUTPUT; // Configure pin as output
  printf("RCC=0x%08X GPIO=0x%08X\n", RCC_AHBENR, GPIO_MODER); // Log config
  return 0; // Exit
} // End main

