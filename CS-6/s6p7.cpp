// Multiple Catch Blocks //
#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout<<" Enter first number: ";
    cin>>num1;

    cout<<" Enter second number: ";
    cin>>num2;

    cout<<" Select an operator (+, -, *, /): ";
    cin>>op;

    try {
        if(op == '+') {
            cout<<" Result: "<<num1 + num2<<endl;
        }
        else if(op == '-') {
            cout<<" Result: "<<num1 - num2<<endl;
        }
        else if(op == '*') {
            cout<<" Result: "<<num1 * num2<<endl;
        }
        else if(op == '/') {
            if(num2 == 0)
                throw 1;
            else
                cout<<" Result: "<<num1 / num2<<endl;
        }
        else {
            throw op;
        }
    }
    catch(int a) {
        cout<<" Error: Division by zero is not allowed."<<endl;
    }
    catch(char c) {
        cout<<" Error: Invalid operator."<<endl;
    }

    return 0;
}