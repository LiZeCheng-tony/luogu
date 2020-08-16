#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a % 100 == 0) {
        if (a % 400 == 0) {
            if (b == 2) {
                cout << 29;
                return 0;
            } else if (b == 1 | b == 3 | b == 5 | b == 7 | b == 8 | b == 10 |
                       b == 12) {
                cout << 31;
                return 0;
            } else {
                cout << 30;
                return 0;
            }
        } else if (a % 400 != 0) {
            if (b == 2) {
                cout << 28;
                return 0;
            } else if (b == 1 | b == 3 | b == 5 | b == 7 | b == 8 | b == 10 |
                       b == 12) {
                cout << 31;
                return 0;
            } else {
                cout << 30;
                return 0;
            }
        }
    } else if (a % 4 == 0) {
        if (b == 2) {
            cout << 29;
            return 0;
        } else if (b == 1 | b == 3 | b == 5 | b == 7 | b == 8 | b == 10 |
                   b == 12) {
            cout << 31;
            return 0;
        } else {
            cout << 30;
            return 0;
        }
    } else if (a % 4 != 0) {
        if (b == 2) {
            cout << 28;
            return 0;
        } else if (b == 1 | b == 3 | b == 5 | b == 8 | b == 10 | b == 12) {
            cout << 31;
            return 0;
        } else {
            cout << 30;
            return 0;
        }
    }
}
