#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	float a, V, S;
	cout << "a = ";
	cin >> a;
	
	V = pow(a, 3);
	S = 6 * a * a;
	
	cout << "V = " << V << endl;
	cout << "S = " << S << endl;
	
	return 0;
}