/*=============================================================================
# 
#LiZeCheng
#L2763404373@hotmail.com
#
# Last modified: 2020-08-11 18:31
=============================================================================*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << a;
    } else {
        cout << int((a * b - c) / 10);
    }
    return 0;
}
