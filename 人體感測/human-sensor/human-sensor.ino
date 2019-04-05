/*
 * 此範例透過人體感測搭配內建 LED
 *  顯示人體感測狀態
 *  
 *  有感應：LED 發亮
 *  有感應：LED 不發亮
 */
int sensorPin = 2;
int outputPin = 13;
int sensorValue;

void setup() {
  pinMode(outputPin,OUTPUT);
  pinMode(sensorPin,INPUT);
}

void loop() {
  sensorValue = digitalRead(sensorPin);
  if(sensorValue == HIGH)
  {
    digitalWrite(outputPin,HIGH);
  }else{
    digitalWrite(outputPin,LOW);
  }
  delay(100);
}
