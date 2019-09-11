
#include <Servo.h>

Servo servo;  
unsigned long yeniZaman =0;
unsigned long sure_ms;
unsigned long dakika;
void setup() {
  servo.attach(9); 
}

void loop() {
  
  
  dakika=30;// SADECE DAKİKAYİ GİRİN

 
  sure_ms=((dakika*60)*1000);
  yeniZaman = millis();  
  if(yeniZaman>sure_ms){
  servo.write(0);
  delay(400);
  servo.write(180);
  delay(400); 
  }
}
