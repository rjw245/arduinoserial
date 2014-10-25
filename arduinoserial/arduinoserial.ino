void setup(){
  int baudrate = 9600;
  Serial.begin(baudrate);
}

void loop(){
  if(Serial.available()){
    char c = Serial.read();
    if(c=='1'){
      Serial.println("Hello! I'm an Arduino!");
    }
  }
}
