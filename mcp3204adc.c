#include <LPC21xx.H>
#include "spi.h"

#define CS0 (1<<7)

u16 mcp3204_adc_read(u8 ch_num)
{
    u16 result;
    u8 byteH, byteL;

    ch_num = (ch_num << 6);

    IOCLR0 = CS0;

    spi0(0x06);

    byteH = spi0(ch_num);
    byteL = spi0(0x00);

    IOSET0 = CS0;

    byteH &= 0x0F;

    result = (byteH << 8) | byteL;

    return result;
}
