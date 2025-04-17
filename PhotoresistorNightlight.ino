const int sensor_pin = A0;
const int led = 8;
int sensor;
const int threshold = 500;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(sensor_pin);
  Serial.println(sensor);
  delay(500);
  if (sensor<threshold) { /* test if lights are on */
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
