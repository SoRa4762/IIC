#include <Arduino.h>

int trigPin = 7;
int echoPin = 8;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distance, duration;

  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  Serial.println("Duration: " + duration);
  distance = duration / 58;
  Serial.println("Distance in CM: " + distance);
}