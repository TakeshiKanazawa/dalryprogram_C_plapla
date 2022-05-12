/* ３つの整数を読み込み、
それらを値が小さい順に並べて出力するプログラムを作成して下さい。
■Input
３つの整数が空白で区切られて与えられます。
■Output
小さい順に並べ替えた３つの整数を１行に出力して下さい。整数の間に１つの空白を入れて下さい。
*/
#include <iostream>
using namespace std;
int main(void) {
  int one, two, three;
  //退避用の変数
  int ex;
  cin >> one, cin >> two, cin >> three;
  if (one > two) {
    ex = one;  // 3
    one = two; // 1
    two = ex;  // 3
  }
  if (two > three) {
    ex = two;    // 3
    two = three; // 2
    three = ex;  // 3
  }
  if (one > two) {
    ex = one;  // 3
    one = two; // 1
    two = ex;  // 31-
  }

  cout << one << " " << two << " " << three << "\n";
  //まずaとbを比較、小さい方を変数Sに代入、大きい方をMに代入
  //次にSとcを比較、小さい方を変数Sに代入→これで最小の数は確定
}