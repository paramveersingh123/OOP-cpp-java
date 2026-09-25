#include <iostream>
using namespace std;

class Account {
public:
    int account_number;
    int balance;

    virtual void display() {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class SavingsAccount : public Account {
public:
    void display()  {
        cout << "Savings Bank Account" << endl;
        Account::display();
    }
};

class CurrentAccount : public Account {
public:
    void display()  {
        cout << "Current Bank Account" << endl;
        Account::display();
    }
};

int main() {
    SavingsAccount s1, s2;
    CurrentAccount c1, c2;

    s1.display();
    s2.display();
    c1.display();
    c2.display();

    return 0;
}