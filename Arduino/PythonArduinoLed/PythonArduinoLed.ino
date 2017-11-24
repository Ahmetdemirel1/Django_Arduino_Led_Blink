

int LEDpin1 = 5;
int LEDpin2 = 6;
int LEDpin3 = 7;


void setup() {
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    char serialListener =Serial.read();
      
      
    if (serialListener == '1'){
      digitalWrite(LEDpin1, HIGH);
    }
    else if (serialListener == '2'){
      digitalWrite(LEDpin1, LOW);
      
    }              
    else if (serialListener == '3'){
      digitalWrite(LEDpin2, HIGH);
      
    }
    else if (serialListener == '4'){
      digitalWrite(LEDpin2, LOW);
      
    }              
    else if (serialListener == '5'){
      digitalWrite(LEDpin3, HIGH);
      
    }
    else if (serialListener == '6'){
      digitalWrite(LEDpin3, LOW);
      
    } 
    else{
      digitalWrite(LEDpin1, LOW);
      digitalWrite(LEDpin2, LOW);
      digitalWrite(LEDpin3, LOW);
                   
    }
  }
}
