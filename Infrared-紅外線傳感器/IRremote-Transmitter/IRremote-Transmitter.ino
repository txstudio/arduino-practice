#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

//紅外線發射器範例程式碼

//有接收到訊息的時候指示燈會亮起
//Keyes \ IR Transmitter \ K851262

//參考程式碼網址
//http://yehnan.blogspot.com/2013/05/arduino.html

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  irsend.sendNEC(0x77E14050,32);
  delay(100);
}
