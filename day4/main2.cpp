#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
  int a, b;
  cin >> a >> b;

  int d = a / b;
  int r = a % b;
  double f;
  f = 1.0 * a / b;
  cout << d << " " << r << " ";
  printf("%.8lf\n", f);
}