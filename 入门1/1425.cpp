#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
  int e, f;
  cin >> a >> b >> c >> d;
  if (b > d) {
    e = c - a - 1;
    f = (60 - b) + d;
  } else if (b == d) {
    e = c - a;
    f = 0;
  } else if (b < d) {
    e = c - a;
    f = d - b;
  }
  cout << e << " " << f;
}
