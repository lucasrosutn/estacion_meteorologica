#include <Arduino.h>
#include "sensor_dht22.h"
#include "sensor_bmp180.h"
#include "display_oled.h"

void loop_app() {
    float temp = 0.0;
    float hum = 0.0;
    float pres = 0.0;

    // Leer sensores
    read_sensor_dht22(temp, hum);
    read_sensor_bmp180(pres);

    // Mostrar datos en el puerto serie
    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.print(" °C, Humedad: ");
    Serial.print(hum);
    Serial.print(" %, Presión: ");
    Serial.print(pres);
    Serial.println(" hPa");

    // Mostrar datos en el OLED
    update_display(temp, hum, pres);

    delay(30000); // Refrescar cada 30 segundos
}

