#include "app.h"
#include "sensor_dht22.h"
#include <Arduino.h>

void loop_app() {
    float temp, hum; // Variables para temperatura y humedad

    read_sensor_dht22(temp, hum); // Lee los valores del sensor

    // Imprime los valores en el monitor serie
    Serial.print("Temperatura: ");
    Serial.println(temp);
    Serial.print("Humedad: ");
    Serial.println(hum);

    delay(30000); // Espera 30 segundos entre lecturas
}
