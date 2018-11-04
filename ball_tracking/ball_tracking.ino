 // incoming serial byte
 char inbyte;
void setup()
{
 // start serial port at 9600 bps;
 Serial.begin(9600);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);

}
void loop()
{
 //if we get a valid byte,read analog ins:
 
  // get incoming byte:
  //delay(2000);
     inbyte = Serial.read();
     //Serial.println(inbyte);
     //Serial.println("HI");
analogWrite(9,100);
analogWrite(3,100);

if (inbyte == 'R')// left motor forward  
{ 
 // delay(100);
 

 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 
 digitalWrite(6,LOW);
 digitalWrite(5,HIGH); 
// delay(50);
 }

 
else if (inbyte == 'L') 
{
 // delay(100);
 //right forward

 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 
 digitalWrite(5,LOW);
 digitalWrite(6,LOW); 
// delay(100);
 }

 
else if (inbyte == 'F')
{
  //delay(100);
   // both wheels forward
 
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 
 digitalWrite(6,LOW);
 digitalWrite(5,HIGH); 
 //delay(100);
 }

 
else if (inbyte == 'S') 
{ 
 // delay(100);
 //stop
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 
 digitalWrite(6,HIGH);
 digitalWrite(5,LOW);
 delay(10);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);

 digitalWrite(5,LOW);
 digitalWrite(6,LOW); 
// delay(100);
 }

 


}
