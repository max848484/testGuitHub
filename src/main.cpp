#include <Arduino.h>

#include "board_mapping.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  
  pinMode(GPIO_DATA_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(GPIO_DATA_LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(GPIO_DATA_LED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  // Code pour tester GitHub.
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}