// Employee Management System //
#include <iostream>
using namespace std;

class Employee {
public:
    int employeeID;
    string name;
};

class Manager : public Employee {
public:
    string department;
    int salary;

    Manager() {
        cout << "Enter Employee Name: ";
        getline(cin>>ws,name);
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Department: ";
        getline(cin>>ws,department);
        cout << "Enter Salary: ";
        cin >> salary;
        cout<<endl;
    }

    void display() {
        cout <<" Employee Name: "<<name<<endl;
        cout<<" Employee ID: "<<employeeID<<endl;
        cout<<" Department: "<<department<<endl;
        cout<<" Salary: "<<salary<<endl;
        cout<<endl;
    }
};

int main() {
    Manager emp[5];
    
    cout<<" EMPLOYEE DETAILS: "<< endl;
    for (int i = 0; i < 5; i++) {
        emp[i].display();
    }

    return 0;
}