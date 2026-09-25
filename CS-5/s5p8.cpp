//  Generic Array Class //
#include <iostream>
using namespace std;

template <class T>
class Array {
public:
    T arr[5];

    void input() {
        cout << "Enter 5 elements: ";
        for(int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void display() {
        cout << "Array elements: "<<endl;
        for(int i = 0; i < 5; i++)
            cout << arr[i] << " "<<endl;
        
    }

    void largest() {
        T max = arr[0];

        for(int i = 0; i < 5; i++) {
            if(arr[i] > max)
                max = arr[i];
        }

        cout << "Largest = " << max << endl;
    }

    void smallest() {
        T min = arr[0];

        for(int i = 0; i < 5; i++) {
            if(arr[i] < min)
                min = arr[i];
        }

        cout << "Smallest = " << min << endl;
    }
};

int main() {
    Array<int> a;
    Array<float> f;

    a.input();
    a.display();
    a.largest();
    a.smallest();

    f.input();
    f.display();
    f.largest();
    f.smallest();

    return 0;
}