#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  double a, b, c;
  double p;
  double S;
  cin >> a >> b >> c;
  p = 0.5 * (a + b + c);
  S = sqrt(p * (p - a) * (p - b) * (p - c));
  printf("%.1f", S);
}
