//  Bank Account Transfer //
#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    double balance;

    void transfer(BankAccount &receiver, double amount)
    {
        if (balance >= amount)
        {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;

            cout <<" Money transferred successfully. " << endl;
        }
        else
        {
            cout <<" Insufficient balance. " << endl;
        }
    }
};

int main()
{
    BankAccount a1, a2;

    a1.accountNumber = 101;
    a1.balance = 15000;
    a2.accountNumber = 102;
    a2.balance = 10000;

    cout<<" Initial Balance: "<<endl;
    cout<<" Account Number: "<<a1.accountNumber<<" Balance: "<<a1.balance<<endl;
    cout<<" Account Number: "<<a2.accountNumber<<" Balance: "<<a2.balance<<endl;

    a1.transfer(a2, 1000);
    
    cout<<" Final Balance: "<<endl;
    cout<<" Account Number: "<<a1.accountNumber<<" Balance: "<<a1.balance<<endl;
    cout<<" Account Number: "<<a2.accountNumber<<" Balance: "<<a2.balance<<endl;
    
    return 0;
}