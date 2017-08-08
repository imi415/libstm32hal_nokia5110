#ifndef __USER_5110_H_
#define __USER_5110_H_

#define LCD_PIN_RESET RST_Pin // LCD reset pin.
#define LCD_PIN_CE CE_Pin // Use hardware SPI NSS pin or define here.
#define LCD_PIN_DC DC_Pin // Data_Command select pin.
#define LCD_SPI_INTERFACE hspi1 // LCD SPI interface.

#define LCD_MAX_TIMEOUT_TICKS 1000

void LCD_Init(void);
void LCD_Reset(void);
void LCD_Write_Command(uint8_t cmd);
void LCD_Write_Data(uint8_t data);
void LCD_Set_Postion(uint8_t PosX, uint8_t PosY);
void LCD_Clear(void);
void LCD_Write_Char(uint8_t ch);
void LCD_Write_String(uint8_t PosX, uint8_t PosY, char * str);

#endif
