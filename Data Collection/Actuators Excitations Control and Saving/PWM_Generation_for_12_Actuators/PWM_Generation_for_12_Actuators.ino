#include "TimerOne.h"

// the setup function runs once when you press reset or power the board
  int LEDpin =  13;
  int LEDpin2 = 11;// define the pin of the LED
 
  int bright = 3;    // initial value of LED brightness
  int incremt = 20;
  int time = 500;

//CORRESPONDANCE ARDUINO PIN AND SMA
  int SMA1 = 5;
  int SMA2 = 44;
  int SMA3 = 3;
  int SMA4 = 4;
  int SMA5 = 6; 
  int SMA6 = 7; 
  int SMP7 = 8;
  int SMP8 = 12;
  int SMP9 = 9;
  int SMP10 = 11;
  int SMP11 = 10;
  int SMP12 = 13;

  //DUTY CYCLE VALUE from 0 to 256

  int SMA1D = 0;
  int SMA2D = 0;
  int SMA3D = 0;
  int SMA4D = 0;
  int SMA5D = 0; 
  int SMA6D = 0; //ISSUE WITH SMA6 
  int SMP7D = 0;
  int SMP8D = 0;
  int SMP9D = 0;
  int SMP10D = 70;
  int SMP11D = 70;
  int SMP12D = 70;


void setup()
  {
    Serial.begin(2000000);
    pinMode(SMA1, OUTPUT);  // define the LEDpin as output pin
    pinMode(SMA2, OUTPUT);
    pinMode(SMA3, OUTPUT);
    pinMode(SMA4, OUTPUT);
    pinMode(SMA5, OUTPUT);
    pinMode(SMA6, OUTPUT);
    pinMode(SMP7, OUTPUT);
    pinMode(SMP8, OUTPUT);
    pinMode(SMP9, OUTPUT);
    pinMode(SMP10, OUTPUT);
    pinMode(SMP11, OUTPUT);
    pinMode(SMP12, OUTPUT);

   }

// the loop function runs over and over again forever
void loop()
  {
    analogWrite(SMA1, SMA1D); 
    analogWrite(SMA2, SMA2D);
    analogWrite(SMA3, SMA3D); 
    analogWrite(SMA4, SMA4D);
    analogWrite(SMA5, SMA5D); 
    analogWrite(SMA6, SMA6D);
    analogWrite(SMP7, SMP7D); 
    analogWrite(SMP8, SMP8D);
    analogWrite(SMP9, SMP9D); 
    analogWrite(SMP10, SMP10D);
    analogWrite(SMP11, SMP11D); 
    analogWrite(SMP12, SMP12D);

int tic = millis();
int toc = tic + 1000;
  if ((toc-tic)>99) {
  Serial.println("GO");
  Serial.println(millis());
  Serial.println(SMA1D);
  Serial.println(SMA2D);
  Serial.println(SMA3D);
  Serial.println(SMA4D);
  Serial.println(SMA5D);
  Serial.println(SMA6D);
  Serial.println(SMP7D);
  Serial.println(SMP8D);
  Serial.println(SMP9D);
  Serial.println(SMP10D);
  Serial.println(SMP11D);
  Serial.println(SMP12D);
  tic = millis();}
  toc = millis();
    
//     set LED brightness as PWM signal
    delay(time);                  // wait for a time period
    bright = bright + incremt;    // increment LED brightness
    // if the brightness is out of range, reduce brightness
     if (bright <=0 || bright >=255) incremt = - incremt;
  }
