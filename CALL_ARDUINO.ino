#include <SoftwareSerial.h>
SoftwareSerial SIM800L(11,10);
void setup()
{
Serial.begin(9600);
SIM800L.begin(9600);
while(!Serial);
Serial.println("Miscall dimulai");
delay(2000);
SIM800L.write("ATD081388056019;\r\n");//masukan nomor tujuan
delay(17000); //delay panggilan
SIM800L.write("ATH\r\n");//hangup panggilan sesuai delay
Serial.println("Miscall Selesai");
}
void loop()
{
}
