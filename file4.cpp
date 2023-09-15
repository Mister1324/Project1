#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int x = -2147483648;x < 2147483647;x++) {
        if ((a * x + b) % (c * x + d) == 0)
            cout << x << endl;
    }
}
