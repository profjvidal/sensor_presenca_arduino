const int pinoPIR = 13; 
const int pinoLED = 8; 

void setup(){
  pinMode(pinoLED, OUTPUT); 
  pinMode(pinoPIR, INPUT); 
}
void loop(){
 if(digitalRead(pinoPIR) == HIGH){
    digitalWrite(pinoLED, HIGH); 
 }else{ //SENÃO, FAZ
  digitalWrite(pinoLED, LOW); 
 }
}
