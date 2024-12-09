#include <Arduino.h>
int trigPin = 7;
int echoPin = 8;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("Setup Complete!");
}

void loop() {
  // put your main code here, to run repeatedly:
  int duration, distance;

  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration / 58;
  Serial.print("Distance in CM: ");
  Serial.println(distance);

  if (distance < 20){
    digitalWrite(ledPin, HIGH);
  } else if (distance > 20 && distance < 40){
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
}