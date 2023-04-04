/* Copyright(c) 2023 Evgeny Vovk All rights reserved.
   Created by : Evgeny Vovk
   Created on : Fabruary 2023
   TEJ3M-Unit2-06.ino File.
 */

const int TRIGPIN = 13;
const int ECHOPIN = 12;
float duration, distance;

void setup() {

  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Serial.begin(9600);

}



void loop() {

  digitalWrite(TRIGPIN, LOW);
  delay(200);
  digitalWrite(TRIGPIN, HIGH);
  delay(100);
  digitalWrite(TRIGPIN, LOW);

  duration = pulseIn(ECHOPIN, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}
