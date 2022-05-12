//秒単位の時間 S が与えられるので、h:m:s の形式へ変換して出力してください。ここで、h は時間、m は 60 未満の分、s は 60 未満の秒とします。

// cin cout など
#include <iostream>
// scanf,printfなど
#include <stdio.h>

using namespace std;

int main()
{
  int S;
  cin >> S;
  int H = S / 3600;      //入力値を3600で割り時間を算出
  int M = S % 3600 / 60; //入力値を3600でわったあまりを60でわり分数を算出
  int s = S % 3600 % 60;
  cout << H << ":" << M << ":" << s << endl;

  // 1時間は3600秒
  // 1分は60病
  // 入力値Sを3600で割った数を変数Hに代入
  // あまりを60で割った数を変数Mに代入

  /* こんな感じにもかけるらしい */
  scanf("%d", &S);
  printf("%d:%d:%d\n", S / 3600, S % 3600 / 60, S % 3600 % 60);
  return 0;
}