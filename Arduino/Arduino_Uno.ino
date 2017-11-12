#include <SoftwareSerial.h>
 
SoftwareSerial BTSerial(2, 3);

void setup(){
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop(){  
  if(Serial.available()){
    char c = '\0';
    
    while(Serial.available()){
      BTSerial.write(Serial.read());
      delay(5);
    }    
    BTSerial.write(c);
  }
  if(BTSerial.available()){
    Serial.write(BTSerial.read());
  }
}
