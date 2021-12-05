# 1 "E:\\PELAJARAN\\SEMESTER 3\\Praktik Internet Of Things\\14\\sketch_dec05a\\sketch_dec05a.ino"
const int trigPin = 3;
const int echoPin = 4;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, 0x1);
  pinMode(echoPin, 0x0);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Clear trigPin
  digitalWrite(trigPin, 0x0);
  delayMicroseconds(2);

  // Set trigPin to HIGH
  digitalWrite(trigPin, 0x1);
  delayMicroseconds(10);
  digitalWrite(trigPin, 0x0);

  duration = pulseIn(echoPin, 0x1);
  distance = duration*0.034/2;
  Serial.print("Jarak = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(200);
}
