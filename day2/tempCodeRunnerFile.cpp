/* ３つの整数a, b,cを読み込み
それらが a < b < cの条件を満たすならば
        "Yes"を、満たさないならば
        "No"を出力するプログラムを作成して下さい。 */

#include <iostream>
using namespace std;
int main(void) {
  int a, b, c;
  cin >> a, cin >> b, cin >> c;
  if (a < b && b << c) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}