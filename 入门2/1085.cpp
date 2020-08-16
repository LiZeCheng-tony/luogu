/*=============================================================================
#
#LiZeCheng
#L2763404373@hotmail.com
#
# Last modified: 2020-08-16 19:56
=============================================================================*/
#include <iostream>
using namespace std;
int main() {
    int a[10], b[10];
    int sum[10];
    int max = 0;
    int c;
    for (int i = 1; i <= 7; i++) {
        cin >> a[i] >> b[i];
        sum[i] = a[i] + b[i];
    }
    for (int i = 1; i <= 7; i++) {
        if (sum[i] > 8) {
            break;
        }
        if (i == 7) {
            cout << 0;
            return 0;
        }
    }
    for (int i = 1; i <= 7; i++) {
        if (sum[i] > max) {
            max = sum[i];
            c = i;
        }
    }
    cout << c;
    return 0;
}
