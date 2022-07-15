

#include<IRremote.h>

#define IR_RECIEVE 2
#define LED1 8


void setup() {
  Serial.begin(115200);
  IrReceiver.begin(IR_RECIEVE );
  pinMode(LED1,OUTPUT);
}

void loop() {
  if(IrReceiver.decode()){
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
    int irData = (IrReceiver.decodedIRData.command);
    
    Serial.println(irData);

    Serial.println("---");
    
    }
}
