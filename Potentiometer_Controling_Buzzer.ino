void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){

  int potence = analogRead(A0);
  
  int frequency = map(potence,0,1023,10000,1000);
  
  Serial.println(potence);
  Serial.println(frequency); 

  if(potence > 1000){
  digitalWrite(13 ,HIGH);
  noTone(12);
  }
  
  else{
  digitalWrite(13, LOW); 
  tone(12,frequency);
  }
}
