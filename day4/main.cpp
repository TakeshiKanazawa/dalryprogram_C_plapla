#include <iostream>
using namespace std;
int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;
  int num;
  while (a <= b)
  {
    if (c % a == 0)
    {
      num += 1;
    }
    a += 1;
  }
  cout << num << "\n";
}