//  Employee Salary Analysis //
#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double salary;
};

Employee findHighest(Employee e[], int n)
{
    Employee highest = e[0];
    for(int i = 1; i < n; i++)
    {
        if(e[i].salary > highest.salary)
        {
            highest = e[i];
        }
    }
    return highest;
}

Employee increment(Employee e)
{
    e.salary = e.salary + (e.salary * 10 / 100);
    return e;
}

int main()
{
    Employee e[3];

    e[0].name = "Aman";
    e[0].salary = 30000;

    e[1].name = "Rahul";
    e[1].salary = 40000;

    e[2].name = "Rohan";
    e[2].salary = 35000;

    Employee highest = findHighest(e, 3);
    cout << "Employee with highest salary: "<< highest.name << endl;
    cout << "Highest Salary: "<< highest.salary << endl;

    Employee revised = increment(e[2]);
    cout << "Revised salary of "<< revised.name << ": " << revised.salary << endl;

    return 0;
}