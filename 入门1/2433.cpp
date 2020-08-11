#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  if (T == 1) {
    cout << "I love Luogu!";
  } else if (T == 2) {
    cout << 2 + 4 << " " << 10 - 2 - 4;
  } else if (T == 3) {
    cout << "3" << endl << "12" << endl << "2";
  } else if (T == 4) {
    printf("%.3f", 1.0 * 500 / 3);
  } else if (T == 5) {
    cout << 15;
  } else if (T == 6) {
    cout << sqrt(117);
  } else if (T == 7) {
    cout << 110 << endl << 90 << endl << 0;
  } else if (T == 8) {
    float pi = 3.141593;
    float l = 2.0 * pi * 5.0, s = pi * 25.0, v = 4.0 / 3.0 * pi * 125.0;
    cout << l << endl << s << endl << v;
  } else if (T == 9) {
    cout << 22;
  } else if (T == 10) {
    cout << 9;
  } else if (T == 11) {
    cout << 100.0 / 3.0;
  } else if (T == 12) {
    printf("13\nR");
  } else if (T == 13) {
    float V = 4.0 / 3.0 * 3.141593 * (64.0 + 1000.0), a;
    a = pow(V, 1.0 / 3.0);
    a = int(a);
    cout << a;
  } else if (T == 14) {
    float x = 0;
    for (int i = 0; i < 110; i++) {
      x++;
      if (120 * x - x * x == 3500) {
        cout << x;
        break;
      }
    }
  }
  return 0;
}
