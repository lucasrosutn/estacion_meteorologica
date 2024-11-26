#include "setup.h"
#include <Arduino.h>
#include "sensor_dht22.h"

void setup_app() {
    Serial.begin(115200);
    delay(1000);

    
    // Llama a la función que inicializa el sensor desde sensor_dht22.cpp
    setup_sensor_dht22();
    Serial.println("Sensor DHT22 inicializado correctamente");
}