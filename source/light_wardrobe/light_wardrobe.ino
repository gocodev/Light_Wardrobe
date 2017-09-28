#include <Wire.h>
#include <PCF8574.h>

PCF8574 outExp4;
PCF8574 inExp1;

int stan = 0; 

void setup() {
  outExp4.begin(0x27);
  inExp1.begin(0x20); 
  inConfig();
  outConfig();
  


}
void outConfig(){
  outExp4.pinMode(0, OUTPUT);
  outExp4.pinMode(1, OUTPUT);
  outExp4.pinMode(2, OUTPUT);
  outExp4.pinMode(3, OUTPUT);
  outExp4.pinMode(4, OUTPUT);
  outExp4.pinMode(5, OUTPUT);
  outExp4.pinMode(6, OUTPUT);
  outExp4.pinMode(7, OUTPUT);

}
void inConfig(){  
  inExp1.pinMode(0, INPUT);
  inExp1.pinMode(1, INPUT);
  inExp1.pinMode(2, INPUT);
  inExp1.pinMode(3, INPUT);
  inExp1.pinMode(4, INPUT);
  inExp1.pinMode(5, INPUT);
  inExp1.pinMode(6, INPUT);
  inExp1.pinMode(7, INPUT);

  inExp1.pullUp(0);
  inExp1.pullUp(1);
  inExp1.pullUp(2);
  inExp1.pullUp(3);
  inExp1.pullUp(4);
  inExp1.pullUp(5);
  inExp1.pullUp(6);
  inExp1.pullUp(7);
   
}
void loop() {
 outExp4.digitalWrite(0, stan); 
 outExp4.digitalWrite(1, stan);
 outExp4.digitalWrite(2, stan); 
 outExp4.digitalWrite(3, stan); 
 outExp4.digitalWrite(4, stan); 
 outExp4.digitalWrite(5, stan); 
 outExp4.digitalWrite(6, stan); 
 outExp4.digitalWrite(7, stan);  
}
