// Faya-Nugget Sample Code 
// Date: 2015/1/26
// Module Name: Slide Potentiometer
// Module Number: #ngt-ot-sldvr-1A
// Description: Detect the resistance value of slide potentiometer (0~10K) and show in series monitor.  
//              Note1: the tolerance of the resistrance is ignored.
//              Note2: the resistance is measured between GND and Ouput Terminal (terminal C)

// Wiring: Module Pin ==> Arduino Pin
//                VCC ==> A
//                  B ==> A0
//                GND ==> C
int x=100;
int y=100;


void setup()
{
  Serial.begin(9600);          //the setup uart baud rate
}

void loop()
{ // put your main code here, to run repeatedly:
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level) 
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
    digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level) 
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(x);               // wait for a second
     digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
       digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
     delay(y);              // wait for a second
     digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
       delay(y);              // wait for a second
       digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
        digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
       delay(y);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  int SldVR_10K;
  
  SldVR_10K=analogRead(A0);             //Read analog pin-0 value
  
  Serial.print("Current resistance (0~10K) = ");       
  SldVR_10K=map(SldVR_10K,1023,0,10000,0);
  Serial.print(SldVR_10K);               //Show Slide VR 10K value
  Serial.println(" ohm"); 
  
  Serial.println("...........................");   
  delay(1000);
  
}
