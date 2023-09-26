#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, s, p;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b){
        cout << "Yes" << endl;
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
            cout << "Прямоугльный";
        else if(pow(a, 2) > pow(b, 2) + pow(c, 2) || pow(b, 2) > pow(a, 2) + pow(c, 2) || pow(c, 2) > pow(b, 2) + pow(a, 2))
            cout << "Тупоугольный";
        else
            cout << "Остроугольный";
    }
    else
        cout << "No";
}
