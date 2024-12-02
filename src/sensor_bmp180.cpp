#include "sensor_bmp180.h"
#include <Adafruit_BMP280.h>

extern Adafruit_BMP280 bmp; // Si tienes el sensor inicializado como variable global

void read_sensor_bmp180(float &pres) {
    pres = bmp.readPressure();
}
