// Area Calculator //
#include<iostream>
using namespace std;

class Area {
    public:
    int side,length,breadth;
    double radius;

    void calculate(int side) {
        int area = side*side;
        cout<<" Area of square is: "<< area << endl;
    }

    void calculate(int length, int breadth) {
        int area = length*breadth;
        cout<<" Area of rectangle is: "<< area << endl;
    }

    void calculate(double radius) {
        double area = 3.14285*radius*radius;
        cout<<" Area of circle is: "<< area << endl;
    }
};

int main() 
{
    Area a;

    a.calculate(5);
    a.calculate(6,4);
    a.calculate(4.5);

    return 0;
}