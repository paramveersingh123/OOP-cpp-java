//  Friend Function – Largest Number //
#include<iostream>
using namespace std;

class Number {
private:
    int i1;
    int i2;

public:
    Number(int a, int b) {
        i1 = a;
        i2 = b;
    }

    friend void larger(Number n);
};

void larger(Number n) {
    if(n.i1 > n.i2) {
        cout << n.i1 << " is larger. " << endl;
    }
    else {
        cout << n.i2 << " is larger. " << endl;
    }
}

int main()
{
    Number n1(5,9);
    larger(n1);

    return 0;
}