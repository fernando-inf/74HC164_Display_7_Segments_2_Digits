void setup() 
            {
               for (int i=2; i<=7; i++) {pinMode(i, OUTPUT);} 
               digitalWrite(CLOCK, LOW); 
               digitalWrite(RESET, HIGH);
               pinMode(7, INPUT_PULLUP);
            }

void loop() 
            {
              Display7S();
              button1();
            }
