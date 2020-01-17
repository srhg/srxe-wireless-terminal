/* Smart Response XE Hacks - Wireless Terminal Firmware
   CMX991 Radio Module Library
   Date Written: 14/1/2020
   Written By: BitOwl
*/

#ifndef CMX991_MODULE_H
#define CMX991_MODULE_H

typedef struct 
{
    
}cmx991_module;

// Common functions
void cmx991_send_bytes(uint8_t send_buff[], uint8_t bytes_to_send);
void cmx991_receive();
void cmx991_set_modulation();

// SPI Transmission functions
void cmx991_spi_init();

#endif