const int sensor_pin = A0;
const int led = 8;
int sensor;
const int threshold = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(sensor_pin);
  Serial.println(sensor);
  delay(500);
  if (sensor<threshold) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
