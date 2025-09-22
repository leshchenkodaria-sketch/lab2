#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    float a, b, c, P;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    c = sqrt(a * a + b * b);

    P = a + b + c;

    cout << "c = " << c << endl;
    cout << "P = " << P << endl;

    return 0;

}
