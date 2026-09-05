#include<iostream>
using namespace std;

class ArraySum {
    private:
    int arr[10];

    public:

    ArraySum() {
        cout<<" Enter 10 integers: "<<endl;
        for(int i = 0; i < 10; i++) {
            cout<<" Element "<< i + 1 <<" : ";
            cin>> arr[i];

        }
    }

    void findSum () {
        int sum = 0;
        for(int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        cout<<" Sum of all elements: "<< sum <<endl;
    }
};

int main () {

    ArraySum obj;

    obj.findSum();

    return 0;

}