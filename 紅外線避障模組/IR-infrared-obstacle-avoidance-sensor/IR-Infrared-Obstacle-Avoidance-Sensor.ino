//
//紅外線壁障感測器模組
//
//參考範例網址
//http://henrysbench.capnfatz.com/henrys-bench/arduino-sensors-and-input/arduino-ir-obstacle-sensor-tutorial-and-manual/
//
const int serialBitRate = 9600;

const int ledPin = 13;
const int obstaclePin = 7;

int obstacleStatus = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(serialBitRate);
}

void loop() {
  obstacleStatus = digitalRead(obstaclePin);

  if(obstacleStatus == LOW)
  {
    Serial.println("no detected");
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    //有偵測到障礙
    Serial.println("something in");
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
