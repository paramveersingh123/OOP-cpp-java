//  Template Function for Generic Operations //
#include <iostream>
using namespace std;

template <class T>
void larger(T a, T b) {
    if(a > b)
        cout << a << " is larger." << endl;
    else
        cout << b << " is larger." << endl;
}

template <class T>
void swap(T a, T b) {
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    T temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {

    larger(8, 6);
    larger(3.4f, 5.6f);
    larger(4.333, 3.134);
    larger('a', 'o');

    swap(3, 5);
    swap(5.2f, 6.8f);
    swap(2.333, 4.555);
    swap('h', 'd');

    return 0;
}