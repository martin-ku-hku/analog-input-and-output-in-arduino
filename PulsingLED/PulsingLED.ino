const int pwm_pin = 11;

void setup(){
    pinMode(pwm_pin, OUTPUT);
}

void loop(){
    int duty = 0;
    for (duty = 0; duty < 256; duty++){
        analogWrite(11, duty);
        delay(10);
    }
}
