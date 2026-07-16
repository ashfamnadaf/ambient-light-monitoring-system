#ifndef UART_H
#define UART_H

extern void uart0_init(unsigned int);
extern void uart0_tx(unsigned char);
extern void uart0_string(unsigned char *);
extern unsigned char uart0_rx(void);
extern void uart0_integer(int);
extern void uart0_float(float);
extern void uart0_rx_string(char *ptr, int max_bytes);

#endif
