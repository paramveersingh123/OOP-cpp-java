// Distance Addition //
#include<iostream>
using namespace std;

class Distance {
    public:
    int feet, inches;

    Distance (int f=0, int i=0) {
        feet = f;
        inches = i;
    }

    Distance operator + (Distance d) {
        Distance temp;

        temp.feet = feet+d.feet;
        temp.inches = inches+d.inches;
        if(temp.inches>=12){
            temp.inches=temp.inches-12;
            temp.feet++;
        }

        return temp;
    }

    void display() {
        cout<<"Total distance: "<<feet<<" ft "<<inches<<" in "<<endl;
    }
};

int main() {
    Distance d1(5,7);
    Distance d2(6,6);

    Distance result = d1 + d2;

    result.display();

    return 0;
}
