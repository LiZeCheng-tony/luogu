#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a == 0) {
        cout << "Today, I ate 0 apple.";
    }
    if (a == 1) {
        cout << "Today, I ate 1 apple.";
    }
    if (a > 1) {
        cout << "Today, I ate " << a << " apples.";
    }
    return 0;
}
