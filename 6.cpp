#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float x1, y1, x2, y2, x3, y3;
   float a, b, c, P, p, S;

    cout << "(x1 y1): ";
    cin >> x1 >> y1;

    cout << "(x2 y2): ";
    cin >> x2 >> y2;

    cout << "(x3 y3): ";
    cin >> x3 >> y3;

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    P = a + b + c;

    p = P / 2;

    S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "sides of the triangle: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "perimeter = " << P << endl;
    cout << "square = " << S << endl;

    return 0;
}