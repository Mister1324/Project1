#include <iostream>
#include <cmath>

using namespace std;

float min_(float a, float b) {
    if (a > b)
        return b;
    return a;
}

int main() {
    float x1, y1, x2, y2, x3, y3, a, b, c, p, s;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    if (pow(a, 2) < pow(b, 2) + pow(c, 2) && pow(b, 2) < pow(a, 2) + pow(c, 2) && pow(c, 2) < pow(b, 2) + pow(a, 2)) {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << 2 * s / a;
    }
    else
        cout << min_(b, c);
}
