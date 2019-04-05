#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

//紅外線接收器範例程式碼

//有接收到訊息的時候指示燈會亮起
//Keyes \ IR Receiver \ K845754

//參考範例網址
//http://cuteparrot.pixnet.net/blog/post/209777515-arduino-ir-%E6%8E%A5%E6%94%B6%E7%AB%AF%E7%B7%B4%E7%BF%92

const int IRReceiverPin = 2;
IRrecv irrecv(IRReceiverPin);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.blink13(true);
  irrecv.enableIRIn();
}

void loop() {
  //有收到資料的話進行資料解析
  if(irrecv.decode(&results))
  {
    Serial.print("result value is ");
    Serial.print(results.value, HEX);
    Serial.print(", bits is ");
    Serial.print(results.bits);
    Serial.print(", decode_type is ");
    Serial.println(results.decode_type);
    irrecv.resume();
  }
}
