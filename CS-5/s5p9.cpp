// Student Result Processing System //
#include <iostream>
using namespace std;

template <class T>
class Result {
public:
    T m1, m2, m3, m4, m5;

    void input() {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    T total() {
        return m1 + m2 + m3 + m4 + m5;
    }

    T average() {
        return total() / 5;
    }

    T highest() {
        T max = m1;

        if(m2 > max) {max = m2;}
        if(m3 > max) {max = m3;}
        if(m4 > max) {max = m4;}
        if(m5 > max) {max = m5;}

        return max;
    }

    T lowest() {
        T min = m1;

        if(m2 < min) {min = m2;}
        if(m3 < min) {min = m3;}
        if(m4 < min) {min = m4;}
        if(m5 < min) {min = m5;}

        return min;
    }

    void display() {
        cout << "Total = " << total() << endl;
        cout << "Average = " << average() << endl;
        cout << "Highest = " << highest() << endl;
        cout << "Lowest = " << lowest() << endl;
    }
};

int main() {
    Result<int> r1;
    Result<float> r2;

    r1.input();
    r1.display();

    r2.input();
    r2.display();

    return 0;
}