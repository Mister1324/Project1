#include <iostream>

using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (((a <= x && b <= y) || (b <= x && a <= y)) || ((a <= x && c <= y) || (c <= x && a <= y)) || ((c <= x && b <= y) || (b <= x && c <= y)))
        cout << "Yes";
    else
        cout << "No";
}