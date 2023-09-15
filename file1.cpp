#include <iostream>

using namespace std;

int main() {
    int x1, x2, x3, a = 0;
    cin >> x1 >> x2 >> x3;
    if (x1 % 2 == 0)
        a ++;
    if (x2 % 2 == 0)
        a ++;
    if (x3 % 2 == 0)
        a ++;
    if (a == 2) 
        cout << "Yes";
    else
        cout << "No";
}
