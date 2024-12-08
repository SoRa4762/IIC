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
  int distance, duration;
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  //finding distance and duration
  duration = pulseIn(echoPin, HIGH);
  Serial.println("Duration: " + duration);
  distance = (duration / 2) * 29.1;
  Serial.print("Distance: " + distance);
}