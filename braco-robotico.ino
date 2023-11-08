#include <Servo.h>

Servo servo_base; // Cria um objeto servo
Servo servo_frontal;
Servo servo_alto;
Servo servo_garra;

// Variável para armazenar a posição do servo1
int pos = 0;

void setup()
{
  // Agrega o objeto servo1 ao pino digital 11
  servo_frontal.attach(5);
  servo_base.attach(6);
  servo_alto.attach(9);
  servo_garra.attach(10);

}

void teste(Servo servo) {
  int pos = 0; // Inicializa a variável pos

  for (pos = 0; pos < 180; pos += 1) {
    servo.write(pos);
    delay(20);
  }
  for (pos = 180; pos >= 1; pos -= 1) {
    servo.write(pos);
    delay(10);
  }
}


void loop()
{
  teste(servo_alto);
}
