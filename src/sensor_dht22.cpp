#include "sensor_dht22.h"
#include <DHT.h>

// Configuración del sensor DHT22
#define DHTPIN 4  // Pin del sensor
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup_sensor_dht22() {
    dht.begin();
}

void read_sensor_dht22(float &temp, float &hum) {
    temp = dht.readTemperature();
    hum = dht.readHumidity();
}
