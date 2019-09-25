int pwm = 0;
int led = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pwm = random(0,255);
  pwmLed(led, pwm);

  Serial.print("AA01, LED: ");
  Serial.println(pwm);
  delay(10);
}

void pwmLed(int led, int pwmValue) {
  // put your main code here, to run repeatedly:
  analogWrite(led, pwmValue);
  delay(10);
}
