#include <Arduino.h>
#line 1 "E:\\PELAJARAN\\SEMESTER 3\\Praktik Internet Of Things\\14\\sketch_dec05a\\sketch_dec05a.ino"
const int trigPin = 3;
const int echoPin = 4;

long duration;
int distance;

#line 7 "E:\\PELAJARAN\\SEMESTER 3\\Praktik Internet Of Things\\14\\sketch_dec05a\\sketch_dec05a.ino"
void setup();
#line 14 "E:\\PELAJARAN\\SEMESTER 3\\Praktik Internet Of Things\\14\\sketch_dec05a\\sketch_dec05a.ino"
void loop();
#line 7 "E:\\PELAJARAN\\SEMESTER 3\\Praktik Internet Of Things\\14\\sketch_dec05a\\sketch_dec05a.ino"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Clear trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set trigPin to HIGH
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  Serial.print("Jarak = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(200);
}

