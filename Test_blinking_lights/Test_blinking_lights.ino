
int switchState = 0; 


void setup(){
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(2, INPUT); 
}

void loop(){
  switchState = digitalRead(2); 
  if (switchState == LOW) {
    //the button is not pressed
    digitalWrite(3, HIGH); //green LED
    digitalWrite(4, LOW); //red LED 
    digitalWrite(5, LOW); //red LED
  }
  else { //the button is pressed
  digitalWrite(3, LOW); //green LED
  digitalWrite(4, HIGH); //red LED
  digitalWrite(5, HIGH); //RED LED
    
  int counter = 0;  
    while (counter <=5) {
      delay (250); //wait for a quarter second
      //toggle the LEDs
      digitalWrite(4, LOW); 
      digitalWrite(5, LOW);
      counter++; 
      delay (1000); //wait for another quarter second
      digitalWrite(4, HIGH); 
      digitalWrite(5, HIGH); 
    }
  
  
  }
}

