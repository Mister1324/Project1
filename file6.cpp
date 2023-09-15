#include <iostream>

using namespace std;

int main() {
    int x, y, x2, y2;
    cin >> x >> y >> x2 >> y2;
    if ((abs(x2 - x) == 1 && abs(y2 - y) == 2) || (abs(x2 - x) == 2 && abs(y2 - y) == 1))
        cout << "Yes";
    else
        cout << "No";
}
