#include <SoftwareSerial.h>

int rx = A1;
int tx = A2;
SoftwareSerial mySerial(rx, tx);

int voltage = 0;


void setup() {
  
  mySerial.begin(9600);
}

void loop() {
  voltage = analogRead(rx);
  mySerial.println(voltage);
  delay(2);

}
