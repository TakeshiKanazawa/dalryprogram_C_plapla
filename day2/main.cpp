/* ２つの整数 a, b を読み込んで、
a と b の大小関係を出力するプログラムを作成して下さい。 */

#include <iostream>
using namespace std;
int main(void) {
  int a;
  int b;
  cin >> a, cin >> b;
  if (a < b)
    cout << "a < b\n";
  else if (a > b)
    cout << "a > b\n";
  else
    cout << "a == b\n";
}