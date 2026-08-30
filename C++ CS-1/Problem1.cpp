// To Find Greatest Of Three Numbers
#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c ) {
        cout << "The greatest number is: " << a << endl;
    } 
    else if (b >= a && b >= c ) {
        cout << "The greatest number is: " << b << endl;
    } 
    else {
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}
