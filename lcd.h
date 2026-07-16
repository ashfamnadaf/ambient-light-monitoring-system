#ifndef LCD_H
#define LCD_H

extern void lcd_cmd(unsigned char cmd);
extern void lcd_data(unsigned char data);
extern void lcd_string(char *ptr);
extern void lcd_init(void);
extern void lcd_cgram(void);
extern void lcd_integer(int);
extern void lcd_float(float);

#endif
