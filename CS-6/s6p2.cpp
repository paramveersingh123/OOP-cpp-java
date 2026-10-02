// Negative Number Exception //a
#include<iostream>
#include<exception>
#include<cmath>
using namespace std;

class NegativeNumberException : public exception {
    public:
    const char *what() const noexcept {
        return " Error: Square root of a negative number cannot be calculated.";
    }
};

int main() {
    int num;
    cout<<" Enter the value of Num 1: ";
    cin >> num;

    try {
        if (num < 0)
            throw NegativeNumberException();

        else
            cout<<"Square root: "<<sqrt(num)<<endl;
    }

    catch(NegativeNumberException &n) {
        cout<<n.what()<<endl;
    }

    return 0;
}

