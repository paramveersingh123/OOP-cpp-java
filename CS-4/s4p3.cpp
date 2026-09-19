// Complex Number Addition //
#include<iostream>
using namespace std;

class Complex {
    public:
    int real, imag;

    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

        Complex operator + (Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display() {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }   
};

int main() {
    Complex c1(5,8);
    Complex c2(6,7);

    Complex result = c1 + c2;

    result.display();
    

    return 0;
}