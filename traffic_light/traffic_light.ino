void setup()
{
  for(int i=1;i<4;i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i=1;i<4;i++){
    digitalWrite(i, HIGH);
    for(int j=1;j<4;j++){
      if(j!=i){
        digitalWrite(j,LOW);
      }
    }
    delay(1000); // Wait for 1000 millisecond(s)
  }
}