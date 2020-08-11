#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int a, b, c, d;
  double x;
  int y;
  cin >> x;
  y = x * 10;
  a = y % 10; //个位
  y -= a;
  b = y % 100; //十位
  y -= b;
  c = y % 1000; //百位
  y -= c;
  d = y % 10000; //千位
  cout << a << "." << b / 10 << c / 100 << d / 1000;
  return 0;
}
