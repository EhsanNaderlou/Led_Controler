// #include <iostream>
#include <stdlib.h>
using namespace std;

int led1 = 13 ;
int led2 = 12 ;
int led3 = 11 ;
int led4 = 10 ;
int led5 = 9 ;
int led6 = 8 ;
int led7 = 7 ;
int led8 = 6 ;
int led9 = 5 ;
int led10 = 4 ;
String data ; 



void setup(){
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
  pinMode(led5 , OUTPUT);
  pinMode(led6 , OUTPUT);
  pinMode(led7 , OUTPUT);
  pinMode(led8 , OUTPUT);
  pinMode(led9 , OUTPUT);
  pinMode(led10 , OUTPUT);
  Serial.begin(9600);


  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , LOW);
  digitalWrite(led3 , LOW);
  digitalWrite(led4 , LOW);
  digitalWrite(led5 , LOW);
  digitalWrite(led6 , LOW);
  digitalWrite(led7 , LOW);
  digitalWrite(led8 , LOW);
  digitalWrite(led9 , LOW);
  digitalWrite(led10 , LOW);
}


void loop(){
  if (Serial.available() > 0){
    data = Serial.readStringUntil('\r') ;
    int des = data.toInt() ; 

    if (des > 180){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , HIGH);
    digitalWrite(led7 , HIGH);
    digitalWrite(led8 , HIGH);
    digitalWrite(led9 , HIGH);
    digitalWrite(led10 , HIGH);

    }else if (des > 160){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , HIGH);
    digitalWrite(led7 , HIGH);
    digitalWrite(led8 , HIGH);
    digitalWrite(led9 , HIGH);
    digitalWrite(led10 , LOW);

    }else if (des > 140){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , HIGH);
    digitalWrite(led7 , HIGH);
    digitalWrite(led8 , HIGH);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

    }else if (des > 120){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , HIGH);
    digitalWrite(led7 , HIGH);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

    }else if (des > 100){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , HIGH);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);


    }else if (des > 80){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , HIGH);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

    }else if (des > 60){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , HIGH);
    digitalWrite(led5 , LOW);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

    }else if (des > 40){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , HIGH);
    digitalWrite(led4 , LOW);
    digitalWrite(led5 , LOW);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

    }else if (des > 20){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , HIGH);
    digitalWrite(led3 , LOW);
    digitalWrite(led4 , LOW);
    digitalWrite(led5 , LOW);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);
    
    }else if (des > 0){
    digitalWrite(led1 , HIGH);
    digitalWrite(led2 , LOW);
    digitalWrite(led3 , LOW);
    digitalWrite(led4 , LOW);
    digitalWrite(led5 , LOW);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
    digitalWrite(led8 , LOW);
    digitalWrite(led9 , LOW);
    digitalWrite(led10 , LOW);

  }
  }

}