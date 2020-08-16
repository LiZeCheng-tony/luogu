#include <iostream>
using namespace std;
int main() {
    int n;
    int a[5];  //个数
    int b[5];  //价格
    int c[5];  //总价
    int d[5];  //购买个数
    cin >> n;
    for (int i = 1; i <= 3; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 1; i <= 3; i++) {
        d[i] = n / a[i];
        if (n % a[i] != 0) d[i]++;
    }
    for (int i = 1; i <= 3; i++) {
        c[i] = d[i] * b[i];
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = i; j <= 3; j++) {
            if (c[i] > c[j]) swap(c[i], c[j]);
        }
    }
    cout << c[1];
    return 0;
}
