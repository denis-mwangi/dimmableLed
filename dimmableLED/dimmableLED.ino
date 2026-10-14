// This is the code for dimming an led.
// We first start by declaring variables we will use

// variables for the pins used on arduino board.
int pin1 = A4;
int pin2 = 11;

// variables for calculating and holding the voltage values.
int potVoltage;    // This is the value of the volatge read by the potential meter.
float ledVoltage;  // This is the value of the voltage read by the led.

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, INPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVoltage = analogRead(pin1);  // Here we read the voltage on pin1
  ledVoltage = (255. / 1023.) * potVoltage;
  analogWrite(pin2,ledVoltage);
}

// MADE WITH LOVE BY DENOE
