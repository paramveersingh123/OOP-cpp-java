// Rectangle Comparison and Merge //
#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length, width;

    void checkArea(Rectangle r) {
        if(length*width == r.length*r.width) {
            cout<<" Both rectangles have equal area. "<<endl;
        }
        else{
            cout<<" Both rectangles do not have equal area. "<<endl;
        }
    }
};

Rectangle mergeRectangle(Rectangle r1, Rectangle r2) {
    Rectangle r;

    r.length = r1.length + r2.length;
    r.width = r1.width + r2.width;

    return r;
}

int main() {
    Rectangle r1,r2,r3;

    r1.length = 5;
    r1.width = 6;
    r2.length = 10;
    r2.width = 3;

    r1.checkArea(r2);
    r3 = mergeRectangle(r1,r2);

    cout<<" New length: "<<r3.length<<endl;
    cout<<" New width: "<<r3.width<<endl;

    return 0;

}