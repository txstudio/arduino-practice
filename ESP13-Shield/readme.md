# ESP13 Shield 擴充板使用備註

設定完成後 Serial.print , Serial.println ... 結果會透過 Network Setting 進行資料傳遞

## 設定說明

要進入設定頁面時請先透過 WiFi 連線到擴充版無線網路（類似 IP 分享器操作）

預設 IP 為 192.168.4.1

### Access Point

設定網頁與內建 AP 設定

### Station

WiFi 無線網路設定，AP Name 請輸入 SSID 名稱，此項目是可關閉

### Network Setting

這裡的 SocketType 可能是指 Socket.IO / SingalR 相關的

要呼叫 HTTP 的時候 Socket Type [Client]，Transport Type [TCP]

Remote IP 為要連線的 IP 位址

> 設定為 192.168.0.106 的話就會連線到該位址

若要呼叫網頁的話 Remote Port 設定為 80

```
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);       
  
  //使用 Http Request Header 呼叫
  //與使用瀏覽器瀏覽 http://192.168.0.106/api/values 相同
  Serial.print("GET /api/values");
  Serial.println(" HTTP/1.1");
  Serial.println("Host: 192.168.0.106");
  Serial.println();
  Serial.flush();
}
```

> 呼叫 ASP.NET Core WebAPI 服務時請繫結到正確的 Listen Address

![擴充版設定網頁](https://raw.githubusercontent.com/txstudio/arduino-practice/master/ESP13-Shield/esp13-shield.gif)

## 開關說明

有兩個開關，開關 #1 搬到 ON 的時候就會開始連線

要使用 Arduino IDE 部屬程式碼時，#1, #2 都必須要在 OFF，否則會出錯

![擴充版提供的功能開關](https://raw.githubusercontent.com/txstudio/arduino-practice/master/ESP13-Shield/esp13-shield-switch-pic.jpg)


## 商品官方資訊
- https://github.com/SmartArduino/DOITWiKi/wiki/Arduino---WiFi-Shield
- http://bbs.doit.am/forum.php?mod=forumdisplay&fid=43&page=1
- http://bbs.doit.am/forum.php?mod=viewthread&tid=341&extra=page%3D1
- http://bbs.doit.am/forum.php?mod=viewthread&tid=176&extra=page%3D1
