#include "sensor_dht22.h"
#include <DHT.h>

#define DHTPIN 4      // Pin donde está conectado el sensor
#define DHTTYPE DHT22 // Tipo de sensor: DHT22

DHT dht(DHTPIN, DHTTYPE); // Objeto para interactuar con el sensor

void setup_sensor_dht22() {
    dht.begin();
    // Inicializa el sensor DHT22.
}

void read_sensor_dht22(float &temp, float &hum) {
    temp = dht.readTemperature(); // Lee la temperatura y la guarda en la variable `temp`.
    hum = dht.readHumidity();     // Lee la humedad y la guarda en la variable `hum`.
}
