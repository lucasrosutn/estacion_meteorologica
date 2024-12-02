#ifndef SENSOR_DHT22_H
#define SENSOR_DHT22_H

void setup_sensor_dht22();                  // Inicializa el DHT22
void read_sensor_dht22(float &temp, float &hum);  // Lee temperatura y humedad

#endif
