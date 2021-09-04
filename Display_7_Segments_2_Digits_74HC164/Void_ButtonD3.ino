#include <Bounce2.h>//Instalar Libreria Bounce2

Bounce2::Button buttonPin7_upBank = Bounce2::Button();

void button1()
{
  buttonPin7_upBank.update();
  if (buttonPin7_upBank.pressed())
  {
    BankMSB_LSB++; // Incrementa el cambio de Banco
    if (BankMSB_LSB > 99) BankMSB_LSB = 0;

    DIGITODERECHO++; // Incrementa el cambio de Banco
    if (DIGITODERECHO > 9) DIGITODERECHO = 0;
  }

}
