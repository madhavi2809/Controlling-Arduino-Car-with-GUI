int speed;
int LED = 13;
char input;

void setup()
{
  Serial.begin(9600);  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(LED, OUTPUT);
  }

void loop()
{
  int potentiometer = analogRead(A0);
  int potent = potentiometer/4;

  analogWrite(10, potent);
  analogWrite(11, potent);

  digitalWrite(LED, LOW);
  speed = 350;
  if(Serial.available())
  {
    char val = Serial.read();
    char timeDelay = Serial.read();
    if(val == 'f'){
      forward();
      if(timeDelay == '1'){
        Delay1();
      }
      else if(timeDelay == '2'){
        Delay2();
      }
      else if(timeDelay == '3'){
        Delay3();
      }
      else if(timeDelay == '4'){
        Delay4();
      }
      else if(timeDelay == '5'){
        Delay5();
      }
      else if(timeDelay == '6'){
        Delay6();
      }
      else if(timeDelay == '7'){
        Delay7();
      }
      else if(timeDelay == '8'){
        Delay8();
      }
      else if(timeDelay == '9'){
        Delay9();
      }
      else if(timeDelay == 'a'){
        Delay10();
      }
    }
    else if(val == 'b'){
      backward();
      if(timeDelay == '1'){
        Delay1();
      }
      else if(timeDelay == '2'){
        Delay2();
      }
      else if(timeDelay == '3'){
        Delay3();
      }
      else if(timeDelay == '4'){
        Delay4();
      }
      else if(timeDelay == '5'){
        Delay5();
      }
      else if(timeDelay == '6'){
        Delay6();
      }
      else if(timeDelay == '7'){
        Delay7();
      }
      else if(timeDelay == '8'){
        Delay8();
      }
      else if(timeDelay == '9'){
        Delay9();
      }
      else if(timeDelay == '10'){
        Delay10();
      }
    }
    else if(val = 'r'){
      right();
      if(timeDelay == '1'){
        Delay1();
      }
      else if(timeDelay == '2'){
        Delay2();
      }
      else if(timeDelay == '3'){
        Delay3();
      }
      else if(timeDelay == '4'){
        Delay4();
      }
      else if(timeDelay == '5'){
        Delay5();
      }
      else if(timeDelay == '6'){
        Delay6();
      }
      else if(timeDelay == '7'){
        Delay7();
      }
      else if(timeDelay == '8'){
        Delay8();
      }
      else if(timeDelay == '9'){
        Delay9();
      }
      else if(timeDelay == '10'){
        Delay10();
      }
    }
    else if(val == 'l'){
      left();
      if(timeDelay == '1'){
        Delay1();
      }
      else if(timeDelay == '2'){
        Delay2();
      }
      else if(timeDelay == '3'){
        Delay3();
      }
      else if(timeDelay == '4'){
        Delay4();
      }
      else if(timeDelay == '5'){
        Delay5();
      }
      else if(timeDelay == '6'){
        Delay6();
      }
      else if(timeDelay == '7'){
        Delay7();
      }
      else if(timeDelay == '8'){
        Delay8();
      }
      else if(timeDelay == '9'){
        Delay9();
      }
      else if(timeDelay == '10'){
        Delay10();
      }
    }
    else if(val == 's'){
      stop();
      if(timeDelay == '1'){
        Delay1();
      }
      else if(timeDelay == '2'){
        Delay2();
      }
      else if(timeDelay == '3'){
        Delay3();
      }
      else if(timeDelay == '4'){
        Delay4();
      }
      else if(timeDelay == '5'){
        Delay5();
      }
      else if(timeDelay == '6'){
        Delay6();
      }
      else if(timeDelay == '7'){
        Delay7();
      }
      else if(timeDelay == '8'){
        Delay8();
      }
      else if(timeDelay == '9'){
        Delay9();
      }
      else if(timeDelay == '10'){
        Delay10();
      }
    }    
  }
}
void stop(){
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}
void backward()
{
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}
void forward()
{
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
}
void left()
{
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}
void right()
{
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}
void Delay1()
{
  delay(1000);
}
void Delay2(){
  delay(2000);
}
void Delay3(){
  delay(3000);
}
void Delay4(){
  delay(4000);
}
void Delay5(){
  delay(5000);
}
void Delay6(){
  delay(6000);
}
void Delay7(){
  delay(7000);
}
void Delay8(){
  delay(8000);
}
void Delay9(){
  delay(9000);
}
void Delay10(){
  delay(10000);
}
