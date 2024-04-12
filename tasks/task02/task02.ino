#include <TaskManagerIO.h>

const int ledPinA = 3;
const int ledPinB = 5;
const int ledPinC = 6;
const int ledPinD = 9;
const int ledPinE = 10;

int ledStateA = LOW; 
int ledStateB = LOW;
int ledStateC = LOW;
int ledStateD = LOW;
int ledStateE = LOW;

const long intervalA = 10000;
const long intervalB = 1000;
const long intervalC = 500;
const long intervalD = 100;
const long intervalE = 50;  

void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(ledPinE, OUTPUT);
  
  taskManager.schedule(repeatMicros(intervalA), blinkA);
  taskManager.schedule(repeatMicros(intervalB), blinkB);
  taskManager.schedule(repeatMicros(intervalC), blinkC);
  taskManager.schedule(repeatMicros(intervalD), blinkD);
  taskManager.schedule(repeatMicros(intervalE), blinkE);
}

void loop() {
  taskManager.runLoop();
}

void blinkA()
{
  if (ledStateA == LOW) {
      ledStateA = HIGH;
    } else {
      ledStateA = LOW;
    }
  digitalWrite(ledPinA, ledStateA);
}

void blinkB()
{
  if (ledStateB == LOW) {
      ledStateB = HIGH;
    } else {
      ledStateB = LOW;
    }
  digitalWrite(ledPinB, ledStateB);
}

void blinkC()
{
  if (ledStateC == LOW) {
      ledStateC = HIGH;
    } else {
      ledStateC = LOW;
    }
  digitalWrite(ledPinC, ledStateC);
}

void blinkD()
{
  if (ledStateD == LOW) {
      ledStateD = HIGH;
    } else {
      ledStateD = LOW;
    }
  digitalWrite(ledPinD, ledStateD);
}

void blinkE()
{
  if (ledStateE == LOW) {
      ledStateE = HIGH;
    } else {
      ledStateE = LOW;
    }
  digitalWrite(ledPinE, ledStateE);
}
