#include <iostream>
using namespace std;
int main() {
    int a;
    int b = 0, c = 0;
    cin >> a;
    b = a * 5;
    c = 11 + a * 3;
    if (b < c) {
        cout << "Local";
    } else {
        cout << "Luogu";
    }
    return 0;
}
