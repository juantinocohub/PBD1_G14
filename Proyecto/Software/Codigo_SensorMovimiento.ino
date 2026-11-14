#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

// Pines de interrupción y LEDs indicadores
#define PIN_INTERRUPCION 2   // IO2
#define PIN_LED_ROJO 6       // IO6
#define PIN_LED_VERDE 7      // IO7

// Pines de comunicación I2C
#define PIN_SDA 19
#define PIN_SCL 20

Adafruit_MPU6050 sensorMovimiento;   // Objeto del sensor de movimiento

void setup() {
  Serial.begin(115200);

  // Configuración de pines
  pinMode(PIN_INTERRUPCION, INPUT_PULLUP);
  pinMode(PIN_LED_ROJO, OUTPUT);
  pinMode(PIN_LED_VERDE, OUTPUT);

  // Inicio de la comunicación I2C con el sensor
  Wire.begin(PIN_SDA, PIN_SCL);

  // Verificación de conexión con el sensor de movimiento
  if (!sensorMovimiento.begin()) {
    Serial.println("Error: No se encontró el MPU6050. Revisa las conexiones SDA/SCL.");
    digitalWrite(PIN_LED_ROJO, 1);
    while (1) { delay(125); }
  }

  Serial.println("MPU6050 inicializado correctamente.");
  digitalWrite(PIN_LED_VERDE, 1);
  delay(200);
  digitalWrite(PIN_LED_VERDE, 0);

  // Configuración de rangos y filtro del sensor
  sensorMovimiento.setAccelerometerRange(MPU6050_RANGE_8_G);
  sensorMovimiento.setGyroRange(MPU6050_RANGE_500_DEG);
  sensorMovimiento.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
  // Lectura de los datos del sensor de movimiento
  sensors_event_t aceleracion, giro, temperatura;
  sensorMovimiento.getEvent(&aceleracion, &giro, &temperatura);

  // Envío de los valores de aceleración por el puerto serial
  Serial.print("Aceleración (X, Y, Z): ");
  Serial.print(aceleracion.acceleration.x); Serial.print(", ");
  Serial.print(aceleracion.acceleration.y); Serial.print(", ");
  Serial.print(aceleracion.acceleration.z); Serial.println(" m/s^2");

  delay(250);
}