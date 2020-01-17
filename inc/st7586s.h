/* Smart Response XE Hacks - Wireless Terminal Firmware
   ST7586S Display Controller Driver
   Date Written: 13/1/2020
   Written By: BitOwl
*/

#ifndef ST7586S_H
#define ST7586S_H

typedef struct 
{
    
}st7586s;

// ST7586S Command set
// Found from Page 29 and onward of datasheet
#define ST7586S_NOP 0x00
#define ST7586S_RST 0x01
#define ST7586S_PWRSV 0x10
#define ST7586S_PTL_MODE 0x12
#define ST7586S_INV_DISP 0x20
#define ST7586S_ALL_PIX_ON_OFF 0x22
#define ST7586S_DISP_ON_OFF 0x28
#define ST7586S_SET_COL_ADDR 0x2A
#define ST7586S_SET_ROW_ADDR 0x2B
#define ST7586S_WR_DISP_DATA 0x2C
#define ST7586S_RD_DISP_DATA 0x2E
#define ST7586S_PTL_DISP_DATA 0x30
#define ST7586S_SET_SCRL_AREA 0x33

void st7586s_init();

#endif