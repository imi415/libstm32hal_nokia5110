#ifndef __USER_5110_H_
#define __USER_5110_H_

#define LCD_RESET_PIN BOARD_LCD_RST_Pin // LCD reset pin.
#define LCD_RESET_PORT BOARD_LCD_RST_GPIO_Port

#define LCD_CE_PIN BOARD_LCD_CE_Pin // Use hardware SPI NSS pin or define here.
#define LCD_CE_PORT BOARD_LCD_CE_GPIO_Port

#define LCD_DC_PIN BOARD_LCD_DC_Pin // Data_Command select pin.
#define LCD_DC_PORT BOARD_LCD_DC_GPIO_Port

#define LCD_SPI_INTERFACE BOARD_LCD_SPI_INTERFACE // LCD SPI interface.

#define LCD_MAX_TIMEOUT_TICKS 1000

void LCD_Init(void);
void LCD_Reset(void);
void LCD_Write_Command(uint8_t cmd);
void LCD_Write_Data(uint8_t data);
void LCD_Set_Postion(uint8_t PosX, uint8_t PosY);
void LCD_Clear(void);
void LCD_Write_Char(uint8_t ch);
void LCD_Write_String(uint8_t PosX, uint8_t PosY, char * str);
void LCD_Callback(void);

#endif
