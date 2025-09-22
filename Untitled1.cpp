#include <iostream>
#include <math.h>   

using namespace std;

int main() {
    float x, y;

    cout << "Введіть значення x: ";
    cin >> x;

    y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);

    cout << "Значення функції y = " << y << endl;

    return 0;
}