#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
  int a, b, c;
    
  int d;
  cin >> a >> b >> c;
  if (c == 0) {
    cout << a;
  } else {
    cout << int((a * b - c) / 10);
  }
  return 0;
}
