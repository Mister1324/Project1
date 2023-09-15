#include <iostream>

using namespace std;

int main() {
    int x, y, x2, y2;
    cin >> x >> y >> x2 >> y2;
    if (abs(y2 - y) == abs(x2 - x))
        cout << "Yes";
    else
        cout << "No";
}
