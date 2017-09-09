void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop(){  
  if(Serial.available()){    
    while(Serial.available()){
      Serial1.write(Serial.read());
      delay(5);
    }
    Serial1.write('\0');
  }
  if(Serial1.available()){
    Serial.write(Serial1.read());
  }
}
