#include <iostream>
using namespace std;

int main() {
	
	float a, b ,c, V, S;
	cout << "a, b, c = " << endl;
	cin >> a >> b >> c;
	
	V = a * b * c;
	S = 2 * (a * b + b * c + c * a);
	
	cout << "V = " << V << ", S = " << S;
	
	return 0;
}