#include <StrToMor.h>

int incomingByte = 0; // for incoming serial data
Morse morse(13);

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // reply only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    
    // say what you got:
    morse.Trans(incomingByte);
  }
}
