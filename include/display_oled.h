#ifndef DISPLAY_OLED_H
#define DISPLAY_OLED_H

#include <Adafruit_SSD1306.h>

// Tamaño del OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Inicialización del OLED (dirección I2C: 0x3C por defecto)
void setup_display();
void update_display(float temp, float hum, float pres);

#endif
