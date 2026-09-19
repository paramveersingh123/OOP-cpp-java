// Static Members – Bank Account Statistics //
#include<iostream>
using namespace std;

class BankAccount {
public:
    int AccNo;
    string name;
    static int totalAccounts;

    BankAccount() {
        totalAccounts++;
        cout << "Account created: " << totalAccounts << endl;
    }

    static void display() {
        cout << "Total Accounts created: " << totalAccounts << endl;
    }

    void input() {
        cout << "Enter Account Number: ";
        cin >> AccNo;

        cout << "Enter Customer Name: ";
        cin >> name;
    }
};

int BankAccount::totalAccounts = 0;

int main() {

    BankAccount b1, b2, b3;

    b1.input();
    b2.input();
    b3.input();

    BankAccount::display();

    return 0;
}