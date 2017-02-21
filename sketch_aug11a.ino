int s = 0;
const int a0 = A0;
const float baseTemp = 25.0;


void setup(){
  Serial.begin(9600);
   
  for(int pin = 2; pin < 8; pin++)
  {
    pinMode(pin, OUTPUT);
  }
  lightup(1);
//  pinMode(2, INPUT);
//  pinMode(3, OUTPUT);
//  pinMode(4, OUTPUT);
//  pinMode(5, OUTPUT);
}
void loop(){
  int sensorVal = analogRead(a0);
//  Serial.print("sensot value " + sensorVal);
  float voltage = (sensorVal/1024.0) * 5.0;
//  Serial.print("volage ");  
      //  Serial.print(voltage);  
  float temperature = (voltage - 0.5) * 100;
  //S/erial.print("temperature ");  
  Serial.println(temperature);  
  if(temperature > baseTemp + 5)
  {
    l                                                                                       cightup(7);
  }
  else if(temperature > baseTemp + 4)
  {
    lightup(6);
  }
  else if(temperature > baseTemp + 3)
  {
    lightup(5);
  }
  else if(temperature > baseTemp + 2)
  {
    lightup(4);
  }
  else if(temperature > baseTemp + 1)
  {
    lightup(3);
  }
  else if(temperature > baseTemp)
  {
    lightup(2);
  }else{
    lightup(1);
  }
  delay(100);
  
/*  s = digitalRead(2);
  if(s == LOW)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }else{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);*/
}

void lightup(int endPin)
{
  for(int pin = 1; pin < 8; pin++)
  {
    if(pin <= endPin)
    {

      digitalWrite(pin, HIGH);
    }else{
      digitalWrite(pin, LOW);
    }
    
  }  
}
