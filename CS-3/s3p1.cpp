// Add Two Numbers Using Objects // 
#include<iostream>
using namespace std;

class Number {
    public:
    int num;
};

int add(Number n1, Number n2) {
    Number n3;
    n3.num = n1.num + n2.num;
    cout<<" The sum of two numbers is: "<< n3.num;

    return n3.num;
}

int main() {
    Number n1,n2,n3;
    n1.num;
    n2.num;
    cout<<" Enter value of n1: ";
    cin >> n1.num;
    cout<<" Enter value of n2: ";
    cin >> n2.num;
    add(n1,n2);

    return 0;
}
