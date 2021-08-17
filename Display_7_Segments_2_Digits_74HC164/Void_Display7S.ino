int DELAY = 10;
uint32_t d_delay = DELAY;

void Display7S() 
            { 
/*DigitLeft*/ if(d_delay <= millis()) { if (BankMSB_LSB>=0 && BankMSB_LSB<=9)
                                            {
                                                digitalWrite(SW1, HIGH); //Enciende Digito Izquierdo
                                                digitalWrite(SW2, LOW);//Apaga Digito Derecho
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[0]); 
                                                //d_delay += DELAY;
                                            }
                                        if (BankMSB_LSB>=10 && BankMSB_LSB<=19)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[1]); 
                                                //d_delay += DELAY;
                                            }

                                        if (BankMSB_LSB>=20 && BankMSB_LSB<=29)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[2]); 
                                                //d_delay += DELAY;
                                            }

                                        if (BankMSB_LSB>=30 && BankMSB_LSB<=39)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[3]);
                                                //d_delay += DELAY;
                                            }


                                        if (BankMSB_LSB>=40 && BankMSB_LSB<=49)
                                            {
                                                digitalWrite(SW1, HIGH);
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[4]);
                                                //d_delay += DELAY;
                                            }
                                        if (BankMSB_LSB>=50 && BankMSB_LSB<=59)
                                            {
                                                digitalWrite(SW1, HIGH);
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[5]); 
                                                //d_delay += DELAY;
                                            }
                                        if (BankMSB_LSB>=60 && BankMSB_LSB<=69)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[6]);
                                                //d_delay += DELAY;
                                            }

                                        if (BankMSB_LSB>=70 && BankMSB_LSB<=79)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[7]);
                                                //d_delay += DELAY;
                                            }

                                        if (BankMSB_LSB>=80 && BankMSB_LSB<=89)
                                            {
                                                digitalWrite(SW1, HIGH); 
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[8]);
                                                //d_delay += DELAY;
                                            }


                                        if (BankMSB_LSB>=90 && BankMSB_LSB<=99)
                                            {
                                                digitalWrite(SW1, HIGH);
                                                digitalWrite(SW2, LOW);
                                                
                                                shiftOut(DATA, CLOCK, LSBFIRST, num[9]);
                                                //d_delay += DELAY;
                                            }

                                       d_delay += DELAY;
                                      }

/*DigitRight*/if(d_delay <= millis()) {
                                        digitalWrite(SW1, LOW);//Apaga Digito Izquierdo
                                        digitalWrite(SW2, HIGH);//Enciende Digito Derecho
                                        
                                        shiftOut(DATA, CLOCK, LSBFIRST, num[DIGITODERECHO]); 
                                        d_delay += DELAY;
                                      }
            }
