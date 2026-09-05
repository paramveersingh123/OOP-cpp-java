#include<iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    double balance;

    public:
    BankAccount(int a, double b) {
        accountNumber = a;
        balance = b;
    }

    void deposit(double amount) {
            balance = balance + amount;
            cout<<" Deposited: " << amount << endl;
        }

    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
            cout<<" Withdrawn amount: " << amount << endl;
        }
        else {
            cout<< " Insufficient balance!."<< endl;
        }
    }
    void displayBalance() {
        cout<<" BALANCE: "<< balance << endl;     
    }
};

int main () {
    BankAccount account(1234, 10000);
    cout<< "Account Number: 1234 "<< endl;
    account.displayBalance();
    account.deposit(5000);
    account.displayBalance();
    account.withdraw(12000);
    account.displayBalance();
    
    return 0;    

}