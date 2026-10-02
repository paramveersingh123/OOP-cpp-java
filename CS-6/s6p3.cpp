// Bank Account Withdrawal//
#include<iostream>
using namespace std;

class BankAccount {
    public: 
    int balance;

    void input() {
        cout<<" Enter the balance: ";
        cin>>balance;
    }

    void withdraw() {
        int amount;
        cout<<" Enter the Withdraw Amount: ";
        cin>>amount;
       
        try{
            if(amount > balance) 
            throw "Error: Insufficient Balance.";

            else {
            balance = balance - amount;
            cout<<" Final Balance: "<< balance << endl;
            }
        }
        catch( const char *a) {
            cout << a << endl;
        }
    }
};

int main() {
    BankAccount b;
    b.input();
    b.withdraw();
    
    return 0;
}