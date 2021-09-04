void setup()
{
  for (int i = 2; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(CLOCK, LOW);
  digitalWrite(RESET, HIGH);
  pinMode(7, INPUT_PULLUP);

  //BOUNCE2
  buttonPin7_upBank.attach(7);//D7
  buttonPin7_upBank.interval(70);//ms
  buttonPin7_upBank.setPressedState(LOW);
}

void loop()
{
  Display7S();
  button1();
}
