#ifndef __USER_5110_H_
#define __USER_5110_H_

void LCD_Init(void);
void LCD_Reset(void);
void LCD_Write_Command(uint8_t cmd);
void LCD_Write_Data(uint8_t data);
void LCD_Set_Postion(uint8_t PosX, uint8_t PosY);
void LCD_Clear(void);
void LCD_Write_Char(uint8_t ch);
void LCD_Write_String(uint8_t PosX, uint8_t PosY, char * str);

#endif
