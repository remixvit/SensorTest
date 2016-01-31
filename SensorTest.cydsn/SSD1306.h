//SSD1306 library for STM8S
//   ewgeny7@speccy.su

#include <Project.h>

#define SSD1306_I2C_ADRESS                                  0x3C // (0111100 + RW)

#define SSD1306_CMD_SETCONTRAST                             0x81
#define	SSD1306_CMD_DISPLAYALLON_RESUME                     0xA4
#define	SSD1306_CMD_DISPLAYALLON                            0xA5
#define	SSD1306_CMD_NORMALDISPLAY                           0xA6
#define	SSD1306_CMD_INVERTDISPLAY                           0xA7
#define	SSD1306_CMD_DISPLAYOFF                              0xAE
#define	SSD1306_CMD_DISPLAYON                               0xAF
#define	SSD1306_CMD_SETDISPLAYOFFSET                        0xD3
#define	SSD1306_CMD_SETCOMPINS                              0xDA
#define	SSD1306_CMD_SETVCOMDETECT                           0xDB
#define	SSD1306_CMD_SETDISPLAYCLOCKDIV                      0xD5
#define	SSD1306_CMD_SETPRECHARGE                            0xD9
#define	SSD1306_CMD_SETMULTIPLEX                            0xA8
#define	SSD1306_CMD_SETLOWCOLUMN                            0x00
#define	SSD1306_CMD_SETHIGHCOLUMN                           0x10
#define	SSD1306_CMD_SETSTARTLINE                            0x40
#define	SSD1306_CMD_MEMORYMODE                              0x20
#define	SSD1306_CMD_COMSCANINC                              0xC0
#define	SSD1306_CMD_COMSCANDEC                              0xC8
#define	SSD1306_CMD_SEGREMAP                                0xA0
#define	SSD1306_CMD_CHARGEPUMP                              0x8D
#define	SSD1306_CMD_CHARGEPUMPON                            0x14
#define	SSD1306_CMD_CHARGEPUMPOFF                           0x10
#define	SSD1306_CMD_ACTIVATE_SCROLL                         0x2F
#define	SSD1306_CMD_DEACTIVATE_SCROLL                       0x2E
#define	SSD1306_CMD_SET_VERTICAL_SCROLL_AREA                0xA3
#define	SSD1306_CMD_RIGHT_HORIZONTAL_SCROLL                 0x26
#define	SSD1306_CMD_LEFT_HORIZONTAL_SCROLL                  0x27
#define	SSD1306_CMD_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL    0x29
#define	SSD1306_CMD_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL     0x2A
#define	SSD1306_CMD_SETSEGMENTREMAP                         0xA1

#define SSD1306_CONTROL_COMMAND     0x00
#define	SSD1306_CONTROL_DATA        0x40



uint32 I2C_SendCommand(uint8 Controll, uint8 Data);
void LCD_Init(void);
void LCD_Clear(void);
void LCD_Update(void);
void LCD_Chr(uint8_t ch);
void LCD_2xChr(uint8_t ch);
void LCD_FStr(char *dataPtr);
void LCD_2xFStr(char *dataPtr);
void LCD_User(char *udg);
void LCD_GotoXY(uint8_t x,uint8_t y);
void LCD_Picture(unsigned char const *data);



