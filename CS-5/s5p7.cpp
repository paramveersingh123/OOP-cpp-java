//  Template Class for Pair of Values //
#include <iostream>
using namespace std;

template <class T>
class Pair {
public:
    T v1, v2;

    void max_min(T v1, T v2) {
        if (v1 > v2)
            cout << v1 << " is maximum and " << v2 << " is minimum." << endl;
        else
            cout << v2 << " is maximum and " << v1 << " is minimum." << endl;
    }
};

int main() {
    Pair<int> i1;
    Pair<float> f1;

    i1.max_min(3, 5);
    f1.max_min(4.5, 6.8);

    return 0;
}