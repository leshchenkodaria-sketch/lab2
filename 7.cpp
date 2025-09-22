#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "enter N (1..365): ";
    cin >> N;

    if (N < 1 || N > 365) {
        cout << "error: N must be within 1..365\n";
        return 1;
    }

    int start = 3; 
    int dayNumber = ((start - 1) + (N - 1)) % 7 + 1;

    cout << "Day of the week number for" << N << ": " << dayNumber << '\n';

   
    const char* names[] = {
        "error",  
        "Monday",
        "Tuesday", 
        "Wednesday",                                                                       
		"Thursday",    
        "Friday",  
        "Saturday",    
        "Sunday"     
    };
    cout << "Day of the week: " << names[dayNumber] << '\n';

    return 0;
}