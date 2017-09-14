#include <PCF8574.h>
#include <Wire.h>

PCF8574 IN_expander_1;
PCF8574 IN_expander_2;
PCF8574 IN_expander_3;
PCF8574 IN_expander_4;

PCF8574 OUT_expander_1;
PCF8574 OUT_expander_2;
PCF8574 OUT_expander_3;
PCF8574 OUT_expander_4;

void setup() {
  IN_expander_1.begin(0x20);
  IN_expander_2.begin(0x21);
  IN_expander_3.begin(0x22);
  IN_expander_4.begin(0x23);

  OUT_expander_1.begin(0x24);
  OUT_expander_1.begin(0x25);
  OUT_expander_1.begin(0x26);
  OUT_expander_1.begin(0x27);

  IN_expander_1.pinMode(0, INPUT);
  IN_expander_1.pinMode(1, INPUT);
  IN_expander_1.pinMode(2, INPUT);
  IN_expander_1.pinMode(3, INPUT);
  IN_expander_1.pinMode(4, INPUT);
  IN_expander_1.pinMode(5, INPUT);
  IN_expander_1.pinMode(6, INPUT);
  IN_expander_1.pinMode(7, INPUT);

  IN_expander_2.pinMode(0, INPUT);
  IN_expander_2.pinMode(1, INPUT);
  IN_expander_2.pinMode(2, INPUT);
  IN_expander_2.pinMode(3, INPUT);
  IN_expander_2.pinMode(4, INPUT);
  IN_expander_2.pinMode(5, INPUT);
  IN_expander_2.pinMode(6, INPUT);
  IN_expander_2.pinMode(7, INPUT);

  IN_expander_3.pinMode(0, INPUT);
  IN_expander_3.pinMode(1, INPUT);
  IN_expander_3.pinMode(2, INPUT);
  IN_expander_3.pinMode(3, INPUT);
  IN_expander_3.pinMode(4, INPUT);
  IN_expander_3.pinMode(5, INPUT);
  IN_expander_3.pinMode(6, INPUT);
  IN_expander_3.pinMode(7, INPUT);

  IN_expander_4.pinMode(0, INPUT);
  IN_expander_4.pinMode(1, INPUT);
  IN_expander_4.pinMode(2, INPUT);
  IN_expander_4.pinMode(3, INPUT);
  IN_expander_4.pinMode(4, INPUT);
  IN_expander_4.pinMode(5, INPUT);
  IN_expander_4.pinMode(6, INPUT);
  IN_expander_4.pinMode(7, INPUT);

  OUT_expander_1.pinMode(0, OUTPUT);
  OUT_expander_1.pinMode(1, OUTPUT);
  OUT_expander_1.pinMode(2, OUTPUT);
  OUT_expander_1.pinMode(3, OUTPUT);
  OUT_expander_1.pinMode(4, OUTPUT);
  OUT_expander_1.pinMode(5, OUTPUT);
  OUT_expander_1.pinMode(6, OUTPUT);
  OUT_expander_1.pinMode(7, OUTPUT);

  OUT_expander_2.pinMode(0, OUTPUT);
  OUT_expander_2.pinMode(1, OUTPUT);
  OUT_expander_2.pinMode(2, OUTPUT);
  OUT_expander_2.pinMode(3, OUTPUT);
  OUT_expander_2.pinMode(4, OUTPUT);
  OUT_expander_2.pinMode(5, OUTPUT);
  OUT_expander_2.pinMode(6, OUTPUT);
  OUT_expander_2.pinMode(7, OUTPUT);

  OUT_expander_3.pinMode(0, OUTPUT);
  OUT_expander_3.pinMode(1, OUTPUT);
  OUT_expander_3.pinMode(2, OUTPUT);
  OUT_expander_3.pinMode(3, OUTPUT);
  OUT_expander_3.pinMode(4, OUTPUT);
  OUT_expander_3.pinMode(5, OUTPUT);
  OUT_expander_3.pinMode(6, OUTPUT);
  OUT_expander_3.pinMode(7, OUTPUT);

  OUT_expander_4.pinMode(0, OUTPUT);
  OUT_expander_4.pinMode(1, OUTPUT);
  OUT_expander_4.pinMode(2, OUTPUT);
  OUT_expander_4.pinMode(3, OUTPUT);
  OUT_expander_4.pinMode(4, OUTPUT);
  OUT_expander_4.pinMode(5, OUTPUT);
  OUT_expander_4.pinMode(6, OUTPUT);
  OUT_expander_4.pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
