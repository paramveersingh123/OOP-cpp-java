//  University Record Management System //
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin>>ws,name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void input() {
        inputPerson();
        cout << "Enter Subject: ";
        getline(cin>>ws,subject);
    }

    void display() {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

class ResearchScholar : public Person {
public:
    string researchArea;

    void input() {
        inputPerson();
        cout << "Enter Research Area: ";
        getline(cin>>ws,researchArea);
    }

    void display() {
        displayPerson();
        cout << "Research Area: " << researchArea << endl;
    }
};

template <class T>
class RecordManager {
public:
    T record;

    void input() {
        record.input();
    }

    void display() {
        record.display();
    }
};

int main() {
    RecordManager<Teacher> t;
    RecordManager<ResearchScholar> r;

    cout << "Teacher Details: " << endl;
    t.input();
    t.display();

    cout << "Research Scholar Details: " << endl;
    r.input();
    r.display();

    return 0;
}