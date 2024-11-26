#include <Arduino.h>
#include "setup.h"
#include "app.h"

void setup() {
    setupApp(); // Inicialización
}

void loop() {
    loop_app(); // Ejecuta la lógica principal
}
