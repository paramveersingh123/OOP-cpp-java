//  Find Larger Object //
#include<iostream>
using namespace std;

class Student {
    public:
    int RollNo;
    int Marks;

};

void findTop(Student s1, Student s2) {
    if(s1.Marks > s2.Marks) {
        cout<<" Roll No "<< s1.RollNo <<" has got higher marks.";
    }
    else {
        cout<<" Roll No "<< s2.RollNo <<" has got higher marks.";
    }
}

int main() {
    Student s1,s2;
    s1.RollNo = 1;
    s1.Marks = 85;
    s2.RollNo = 2;
    s2.Marks = 90;

    findTop(s1,s2);

    return 0;
}