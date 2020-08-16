/*=============================================================================
# 
#LiZeCheng
#L2763404373@hotmail.com
#
# Last modified: 2020-08-12 20:31
=============================================================================*/
#include <iostream>
using namespace std;
int main() {
    int a;
    int b = 0;
    cin >> a;
    if (a % 2 == 0) {
        b++;
    }
    if (a > 4 && a <= 12) {
        b++;
    }
    if (b == 2) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if (b >= 1) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if (b == 1) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if (b == 0) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
}
