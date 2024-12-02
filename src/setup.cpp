#include "setup.h"
#include <Arduino.h>
#include "sensor_dht22.h"
#include "sensor_bmp180.h"
#include "display_oled.h"

void setup_app() {
    Serial.begin(115200);
    delay(1000);

    setup_sensor_dht22();
    Serial.println("Sensor DHT22 inicializado correctamente");

    setup_sensor_bmp180();
    Serial.println("Sensor BMP180 inicializado correctamente");

    setup_display();
    Serial.println("OLED inicializado correctamente");
}

