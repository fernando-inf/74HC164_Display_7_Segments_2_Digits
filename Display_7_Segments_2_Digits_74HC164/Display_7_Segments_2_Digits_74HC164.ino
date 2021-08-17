//fernando-inf@hotmail.com

int DIGITODERECHO = 0;
int BankMSB_LSB = 0;

int DATA = 2; // D2 al Pin DATA 74HC164
int CLOCK = 3;// D3 al Pin CLOCK 74HC164
int RESET = 4;// D4 al Pin RESET 74HC164
int SW1 = 5;
int SW2 = 6;

byte num[10] = {B00001000, B00111110, B01000100, B00100100, B00110010, B00100001, B00000001, B00111000, B00000000, B00100000};
             //{....0....,.....1....,.....2....,.....3....,....4.....,..........,.....6....,.....7....,.....8....,.....9....}
             // El valor binario dependera de como este soldado el 74HC164 al Display.
