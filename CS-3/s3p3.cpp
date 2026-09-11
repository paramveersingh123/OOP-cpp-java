//  Distance Addition //
#include<iostream>
using namespace std;

class Distance {
    public:
    int feet,inches;

    public:
    Distance add(Distance d) {
        Distance d3;
        d3.feet = feet + d.feet;
        d3.inches = inches + d.inches;
        if (d3.inches >= 12) {
            d3.inches = d3.inches - 12;
            d3.feet++;        
        }
        return d3;
    }
};

int main() {
    Distance d1,d2, d3;
    d1.feet = 6;
    d1.inches = 9;
    d2.feet = 7;
    d2.inches = 8;

    d3 = d1.add(d2);
    cout<<" Total Distance: "<< d3.feet <<" ft "<< d3.inches <<" inches ";

    return 0;
}



