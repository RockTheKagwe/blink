#include <Arduino.h>

const int led = 13;
unsigned long previousTime = millis();
long timeInterval = 1000;
int ledState = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime = millis();
  if (currentTime - previousTime > timeInterval){
    previousTime = currentTime;
    if (ledState == HIGH ){
      ledState = LOW;
    }
    else{
      ledState = HIGH;
    }
    digitalWrite(led, ledState);
  }
}