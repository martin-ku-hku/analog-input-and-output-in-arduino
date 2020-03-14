const int input_pin = A0;

void setup(){
    pinMode(input_pin, INPUT);
    Serial.begin(9600);
}

void loop(){
    int analog_value = analogRead(A0);
    Serial.println(analog_value);
    delay(100);
}
