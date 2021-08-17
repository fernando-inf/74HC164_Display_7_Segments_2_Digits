#include <Bounce.h>//https://github.com/mpflaga/Arduino-Bounce

#define buttonPin7 7
Bounce buttonPin7_upBank =  Bounce(buttonPin7, 100);

 void button1()
                {
                  buttonPin7_upBank.update();
                  if (buttonPin7_upBank.fallingEdge()) 
                        {
                          BankMSB_LSB++; // Incrementa el cambio de Banco
                          if (BankMSB_LSB > 99) BankMSB_LSB = 0; 

                          DIGITODERECHO++; // Incrementa el cambio de Banco
                          if (DIGITODERECHO > 9) DIGITODERECHO = 0;
                        }

                }
