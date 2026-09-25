// Student Information System //
#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollNo;
    int age;

    Student() {
        cout<<" Enter Name:";
        getline(cin>>ws,name);
        cout<<" Enter Roll Number: ";
        cin >> rollNo;
        cout<<" Enter age: ";
        cin >> age; 
    }

    void display() {
        cout<<" STUDENT DETAILS: "<< endl;
        cout<<" Name: "<< name << endl;
        cout<<" Roll No: "<< rollNo << endl;
        cout<<" Age: "<< age << endl;
    }
};

class EngineeringStudent : public Student {
    public:
    int semester;
    string branch;

    EngineeringStudent() {
        cout<<" Enter Branch: ";
        getline(cin>>ws,branch);
        cout<<" Enter Semester: ";
        cin >> semester; 
    }

    void display() {
        Student::display();
        cout<<" Branch: "<< branch <<endl;
        cout<<" Semester: "<< semester <<endl;
    }
};

int main() {
    EngineeringStudent s;
    s.display();
    
    return 0;
}