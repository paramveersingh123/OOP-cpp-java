// Friend Function – Sum of Two Classes //
#include<iostream>
using namespace std;

class B;
class A {
private:
    int num1;

public:
    void input() {
        cout <<" Enter 1st number: ";
        cin >> num1;
    }

    friend int sum(A a, B b);
};

class B {
private:
    int num2;

public:
    void input() {
        cout <<" Enter 2nd number: ";
        cin >> num2;
    }

    friend int sum(A a, B b);
};

int sum(A a, B b) {
    return a.num1 + b.num2;
}

int main() {
    A a;
    B b;

    a.input();
    b.input();

    cout <<" Sum is "<< sum(a, b) << endl;

    return 0;
}