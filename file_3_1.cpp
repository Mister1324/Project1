#include <iostream>

using namespace std;

int main() {
    long long a, c = 0;
    int b, j = 0;
    cin >> a >> b;
    b--;
    
    while (a > 0) {
        c *= 10;
        c += a % 10;
        a /= 10;
        j ++;
    }
    j = 0;
    while (c > 0) {
        if (j != b) {
            a *= 10;
            a += c % 10;
        }
        c /= 10;
        j++;
    }
    cout << a;
}

