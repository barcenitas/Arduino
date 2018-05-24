#include <XMorse.h>


XMorse morseABC = XMorse();
char literal;


void setup() {
  Serial.begin(9600);

}

void loop() {
  literal=Serial.read();
  morseABC.abecedario(literal);
  delay(1000);
}


