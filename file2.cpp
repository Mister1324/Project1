#include <iostream>

using namespace std;

int main() {
    int x1, x2, x3, a = 0;
    cin >> x1 >> x2 >> x3;
    if (x1 == x2)
        a += 2;
    if (x2 == x3) {
        a ++;
        if (x1 != x2)
            a ++;
    }
    if (x3 == x1 && (x1 != x2 || x2 != x3)) {
        a ++;
        if (a == 1)
            a ++;
    }
    cout << a;
}
