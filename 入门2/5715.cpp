#include <iostream>
using namespace std;
int main() {
    int a[5];
    cin >> a[1] >> a[2] >> a[3];
    for (int i = 1; i <= 2; i++) {
        for (int j = i; j <= 3; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 1; i <= 3; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
