// Division by Zero Exception //
#include<iostream>
using namespace std;

int main() {
    int num1, num2;

    cout<<" Enter the value of Num 1: ";
    cin >> num1;
    cout<<" Enter the value of Num 2: ";
    cin >> num2;

    try{
        if (num2 == 0) 
        throw "Error: Division by zero is not allowed.";

        else{
        cout<<num1<<" / "<<num2<<" : "<< num1/num2 << endl;
        }
    }
    catch(const char *a) {
        cout << a << endl;
    }
    
    return 0;
}
