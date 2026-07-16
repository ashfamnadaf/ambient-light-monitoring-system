#include <LPC21xx.H>
#include "types.h"
#include "adc.h"
#include "uart.h"
#include "spi.h"
#include "delay.h"

int main()
{
    u16 temp;
    float a,temp1;

    adc_init();
    uart0_init(9600);
    spi0_init();

    while(1)
    {
        temp = mcp3204_adc_read(2);

        temp1 = temp;

        a = (((4095 - temp1) / 4095) * 100);

        uart0_tx_string("\r\nL:");
        uart0_float(a);
        uart0_tx('%');

        delay_ms(100);
    }
}
