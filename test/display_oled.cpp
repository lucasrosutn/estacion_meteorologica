#include "display_oled.h"
#include <Adafruit_SSD1306.h>

// Crear instancia del display
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup_display() {
    if (!display.begin(SSD1306_I2C_ADDRESS, 0x3C)) {
        Serial.println("Error al inicializar el OLED");
        while (true); // Detener ejecución si falla
    }
    display.clearDisplay();
    display.display(); // Muestra el contenido inicial (pantalla vacía)
}

void update_display(float temp, float hum, float pres) {
    display.clearDisplay();

    // Mostrar temperatura
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.print("Temp: ");
    display.print(temp);
    display.println(" C");

    // Mostrar humedad
    display.setCursor(0, 10);
    display.print("Hum: ");
    display.print(hum);
    display.println(" %");

    // Mostrar presion
    display.setCursor(0, 20);
    display.print("Pres: ");
    display.print(pres);
    display.println(" hPa");

    display.display(); // Actualizar pantalla
}
