/* Smart Response XE Hacks - CMX991 Breakout Board Firmware
   Date Written: 10/1/2020
   Written By: BitOwl
 */

#ifndef F_CPU
#define F_CPU 8000000UL // 8 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

// Device Library Headers
#include "st7586s.h"
#include "cmx991_module.h"

// Function Prototypes
void hw_init();

st7586s display;

int main(void)
{
  hw_init();
}

// Initializes all hardware peripherals and devices
void hw_init()
{
  
}