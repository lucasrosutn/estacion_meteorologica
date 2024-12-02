#ifndef SENSOR_BMP180_H
#define SENSOR_BMP180_H

void setup_sensor_bmp180();  // Inicializa el sensor BMP180
void read_sensor_bmp180(float &pres);
float read_pressure(float &pres);       // Retorna la presión en hPa

#endif
