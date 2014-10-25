int led = 13;

void setup(){
  int baudrate = 9600;
  Serial.begin(baudrate);
  pinMode(led,OUTPUT);
}

void loop(){
  if(Serial.available()){
    char c = Serial.read();
    if(c=='1'){
      Serial.println("LED is on");
      //Do whatever else
      digitalWrite(led,HIGH);
    }
    else if(c=='2'){
      Serial.println("LED is off");
      digitalWrite(led,LOW);
    }
    else if(c=='3'){
      Serial.println("Hello I'm an Arduino!");
    }
  }
}
