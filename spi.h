#ifndef SPI_H
#define SPI_H

extern void spi0_init(void);
extern u8 spi0(u8 data);
extern u16 mcp3204_adc_read(u8 ch_num);

#define CS0 (1<<7)

#endif
