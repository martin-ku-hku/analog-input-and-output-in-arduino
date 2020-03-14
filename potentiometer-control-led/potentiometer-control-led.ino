const int led_pin = 11;
const int input_pin = A0;

int input_to_output(int input){
  int result = 255 * input / 1023;
  return result;
}

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(input_pin, INPUT);
}

void loop() {
  int read_value = analogRead(input_pin);
  int converted_value = input_to_output(read_value);
  analogWrite(led_pin, converted_value);
}
