/* These are the sensors reading variables */
// For SENSORS ANALOG INPUT
 
 int smokesensor = 0;
 int lm35 = 1;
 int lightsensor = 2;

/* These are the output to the connected pins */
// For OUTPUT PINS

  int ledpin0 = 13;
 /* int ledpin1 = 1;
  int ledpin2 = 2;
  int ledpin3 = 3;

  int speaker = 11;
  */
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  int smokesensorvalue=analogRead(smokesensor);
  
  
  int analogvalue;
  float temprature;
  analogvalue= analogRead(lm35);
  temprature= float(analogvalue)/1023;
  temprature= temprature*500;

  int lightsensorvalue = analogRead(lightsensor);
  
  Serial.println("Sensors Data ");
  Serial.print("Smoke Reading(PPM)   :");
  Serial.println(smokesensorvalue);
  Serial.print("Temprature Reading(C):");
  Serial.println(temprature);
  Serial.print("Light Intensity      :");
  Serial.println(lightsensorvalue);

  if(smokesensorvalue > 165)
  {

  Serial.print("CRUCIAL");
  digitalWrite(ledpin0,HIGH);
  delay(40);
  digitalWrite(ledpin0,LOW);
  delay(10);
   /* 
    digitalWrite(ledpin0,HIGH);
    delay(100);
    digitalWrite(ledpin0,LOW);
    delay(100);*/
  /*  
    digitalWrite(ledpin1,HIGH);
    delay(100);
    digitalWrite(ledpin1,LOW);
    delay(100);
    
    digitalWrite(ledpin2,HIGH);
    delay(100);
    digitalWrite(ledpin2,LOW);
    delay(100);
    
    digitalWrite(ledpin3,HIGH);
    delay(100);
    digitalWrite(ledpin3,LOW);
    delay(100);
   */
  }
  
  delay(500);
}
