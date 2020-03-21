const int led_pin = 11;
const int input_pin = A0;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(input_pin, INPUT);
}

void loop() {
  int read_value = analogRead(input_pin);
  int converted_value = map(read_value, 0, 1023, 0, 255);
  analogWrite(led_pin, converted_value);
}
