//  Inline Function – Simple Interest //
#include<iostream>
using namespace std;

class Interest {
public:
    double P, R, T;

    inline double calculateSI() {
        return (P * R * T) / 100;
    }
};

int main() {

    Interest i;

    cout << "Enter Principal: ";
    cin >> i.P;

    cout << "Enter Rate: ";
    cin >> i.R;

    cout << "Enter Time: ";
    cin >> i.T;

    cout << "Simple Interest = " << i.calculateSI() << endl;

    return 0;
}


