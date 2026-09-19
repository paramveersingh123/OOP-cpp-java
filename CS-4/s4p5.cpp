//  Static Members – Student Counter 
#include<iostream>
using namespace std;

class Student{
    public:

    static int count;

    Student() {
        count++;
        cout<<"Student Created "<<endl;
    }

    static void display() {
        cout<<"Total Students: "<<count<<endl;
    }
};

int Student::count = 0;

int main() {

    Student s1,s2,s3,s4;

    Student::display();

    return 0;
}