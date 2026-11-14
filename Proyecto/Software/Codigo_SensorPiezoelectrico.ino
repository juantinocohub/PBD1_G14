#include <Arduino.h>

// Pines del sensor y de los LEDs indicadores
#define PIN_SENSOR 5       // IO5 - entrada del sensor piezoeléctrico
#define PIN_LED_ROJO 6     // IO6
#define PIN_LED_VERDE 7    // IO7

#define UMBRAL 500

void setup() {
  Serial.begin(115200);

  // Configuración de pines: sensor como entrada, LEDs como salida
  pinMode(PIN_SENSOR, INPUT);
  pinMode(PIN_LED_ROJO, OUTPUT);
  pinMode(PIN_LED_VERDE, OUTPUT);
}

void loop() {
  // Lectura del sensor piezoeléctrico
  int valorSensor = analogRead(PIN_SENSOR);

  // Comparación con el umbral para indicar adherencia con el LED
  if (valorSensor < UMBRAL) {
    digitalWrite(PIN_LED_ROJO, 1);
    digitalWrite(PIN_LED_VERDE, 0);
  } else {
    digitalWrite(PIN_LED_ROJO, 0);
    digitalWrite(PIN_LED_VERDE, 1);
  }

  // Envío del valor leído por el puerto serial
  Serial.print("Adherencia (Socket): ");
  Serial.println(valorSensor);

  delay(250);
}