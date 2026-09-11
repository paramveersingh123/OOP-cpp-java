//  Complex Number Operations //
#include<iostream>
using namespace std;

class Complex {
    public:
    int real;
    int imag;

    Complex add(Complex c) {
        Complex r;
        r.real = real + c.real;
        r.imag = imag + c.imag;
        cout<<" Addition of 2 complex numbers: "<<r.real<<" + "<<r.imag<<" i "<<endl;

        return r;
    }

    Complex multiply(Complex c) {
        Complex r;
        r.real = (real*c.real) - (imag*c.imag);
        r.imag = (real*c.imag) + (imag*c.real);
        cout<<" Multiplication of 2 complex numbers: "<<r.real<<" + "<<r.imag<<" i "<<endl;
        return r;
    }
};

    Complex subtract(Complex c1 , Complex c2) {
        Complex r;
        r.real = c1.real - c2.real;
        r.imag = c1.imag - c2.imag;
        cout<<" Subtraction of 2 complex numbers: "<<r.real<<" + "<<r.imag<<" i "<<endl;

        return r;
    }

    int main() {
        Complex c1,c2;

        c1.real = 7;
        c1.imag = 6;
        c2.real = 6;
        c2.imag = 3;

        c1.add(c2);
        subtract(c1,c2);
        c1.multiply(c2);

        return 0;
    }