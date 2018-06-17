/*******************************************************
**  SSD1306 驱动
**  项目：多路PWM测量记录
**  作者：周吉
**  2018年5月21日
*******************************************************/
#ifndef __FONT_H__
#define __FONT_H__

/*******************************************************
**  INCLUDES
*******************************************************/
#include "stdint.h"

/******************************************************
**  TYPE DEFINITION
*******************************************************/
typedef struct Fonts_t
{
    uint8_t high;       //
    uint8_t width;      //
}   Fonts_t;

typedef struct BPM_Format_t
{
    uint16_t high;
    uint16_t width;
    uint8_t *data;
}   BPM_Format_t;

#endif

/****************************END***************************/
