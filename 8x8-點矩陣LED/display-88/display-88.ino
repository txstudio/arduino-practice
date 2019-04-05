
/* 要設定為 LOW 的腳位 */
int cols[5] = {3,4,5,6,7};
/* 要設定為 HIGH 的腳位 */
int lines[6] = {8,9,10,11,12,13};

int byebye[5][6] = {
  {1,1,1,1,1,1},
  {1,0,1,1,0,1},
  {1,1,1,1,1,1},
  {1,0,1,1,0,1},
  {1,1,1,1,1,1}
};
int hi[5][6] = {
  {1,0,1,0,1,0},
  {1,0,1,0,1,0},
  {1,1,1,0,1,0},
  {1,0,1,0,0,0},
  {1,0,1,0,1,0}
};

int _lineLength;
int _colLength;

void setPinMode(int cols[5],int lines[6])
{
  
}

//顯示 "88" 訊息
//  second = 顯示滯留時間(秒)
void displayByeBye(int second)
{
  int _millisecond = second * 1000;
  int _tick = 0;
  int _delay = 1;

  while(_tick < _millisecond)
  {
    for(int i=0;i<_colLength;i++)
    {
      for(int j=0;j<_lineLength;j++)
      {
        if(byebye[i][j]==1){
          digitalWrite(cols[i],LOW);
          digitalWrite(lines[j],HIGH);
          delay(_delay);
          digitalWrite(cols[i],HIGH);
          digitalWrite(lines[j],LOW);
          _tick = (_tick + _delay);
        }
      }
    }
  }
}

//顯示 "Hi" 訊息
//  second = 顯示滯留時間(秒)
void displayHi(int second)
{
  int _millisecond = second * 1000;
  int _tick = 0;
  long _delay = 1;

  while(_tick < _millisecond)
  {
    for(int i=0;i<_colLength;i++)
    {
      for(int j=0;j<_lineLength;j++)
      {
        if(hi[i][j]==1){
          digitalWrite(cols[i],LOW);
          digitalWrite(lines[j],HIGH);
          delay(_delay);
          digitalWrite(cols[i],HIGH);
          digitalWrite(lines[j],LOW);
          _tick = (_tick + _delay);
        }
      }
    }
  }
}

void setup() {
  _colLength = sizeof(cols)/sizeof(cols[0]);
  _lineLength = sizeof(lines)/sizeof(lines[0]);
  for(int i=0; i<_colLength; i++)
  {
    pinMode(cols[i],OUTPUT);
  }
  for(int i=0;i<_lineLength;i++)
  {
    pinMode(lines[i],OUTPUT);
    //digitalWrite(lines[i],HIGH);
  }
}

int _ms = 0;
void loop() {
  displayByeBye(2);
  delay(1000);
  displayHi(2);
  delay(1000);
}
