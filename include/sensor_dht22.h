#ifndef SENSOR_DHT22_H
#define SENSOR_DHT22_H
#include <DHT.h>

extern DHT dht; // Declaración del objeto para uso global
// Función para inicializar el sensor DHT22
void setup_sensor_dht22();

// Función para obtener lecturas de temperatura y humedad
void read_sensor_dht22(float &temp, float &hum);

#endif // SENSOR_DHT22_H
