/*
 * 使用按鈕控制 Arduino 預設 LED 顯示的範例程式碼
 */
int defaultLEDPin = 13;
int defaultButtonDetectPin = 2;

int buttonAction = 0;

//參考網址
//https://www.youtube.com/watch?v=JNk7u7Z5IMw

void setup() {
  pinMode(defaultLEDPin, OUTPUT);
  pinMode(defaultButtonDetectPin, INPUT);
}

void loop() {
  buttonAction = digitalRead(defaultButtonDetectPin);
  if(buttonAction == HIGH)
  {
    digitalWrite(defaultLEDPin, HIGH);
  }else{
    digitalWrite(defaultLEDPin, LOW);
  }
  delay(100);
}
