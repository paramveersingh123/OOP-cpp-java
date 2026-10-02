//  Student Marks Validation //
#include<iostream>
using namespace std;

int main() {
    int marks;
    cout<<" Enter the marks: ";
    cin >> marks;

    try{
        if (marks<0 || marks>100)
        throw "Invalid Marks! Marks should be between 0 and 100.";

        else
        cout<<" Marks: "<< marks <<endl;   
    }
    catch(const char *a) {
        cout<< a <<endl;
    }

    return 0;
}