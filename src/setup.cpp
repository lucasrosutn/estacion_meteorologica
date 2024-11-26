#include "setup.h"
#include "sensor_dht22.h" // Importa las funciones del DHT22
#include <Arduino.h>

// Aquí se inicializan todos los componentes
void setupApp() {
    Serial.begin(115200); // Inicialización del puerto serie para depuración
    Serial.println("I N I C I A L I Z A N D O    S I S T E M A  - Aguarde un instante por favor.");
    
    // Más inicializaciones se agregarán aquí más adelante
    // Por ejemplo, sensores, Wi-Fi, etc.



}
