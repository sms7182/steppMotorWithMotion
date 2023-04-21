// void setup(){

// }
// void loop(){

// }


int dirPin=2;
int stpPin=3;
int led=7;
int rly=8;


int inp=6;

int val=0;
int ps=LOW;

int randNum=9;
void setup() {
  pinMode(inp,INPUT);
  pinMode(led,OUTPUT);
  pinMode(rly,OUTPUT);
  pinMode(dirPin,OUTPUT);
  pinMode(stpPin,OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop(){
  randNum=random(1000);
  
  if(randNum%2==0){
    digitalWrite(led,HIGH);
    if(ps==LOW){
      
      digitalWrite(dirPin,HIGH);
      delay(1000);
      digitalWrite(stpPin,HIGH);     
      digitalWrite(dirPin,LOW);
      digitalWrite(stpPin,LOW);     
      
      digitalWrite(led,LOW);
      digitalWrite(rly,HIGH);
      delay(5000);
      digitalWrite(rly,LOW);
      
      Serial.println(randNum);
      
      ps=HIGH;
    }
  }
  else{
      ps=LOW;
      Serial.println(randNum);
      digitalWrite(rly,LOW);
      digitalWrite(led,LOW);
       digitalWrite(dirPin,LOW);
      digitalWrite(stpPin,LOW);     
     
    }
}


// void loop() {
//   val=digitalRead(inp);
//   if (val==HIGH){
//     digitalWrite(led,HIGH);
//     if(ps==LOW){
      
//       ps=HIGH;
//       delay(2000);
//       digitalWrite(led,LOW);
      

      

//     }else{
//       digitalWrite(led,LOW);
//       if(ps==HIGH){
//         Serial.println("Motion ended");
//         ps=LOW;
//       }
//     }
//   }

// }


