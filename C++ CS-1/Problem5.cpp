// To Check Number Is Palindrome Or Not
#include <iostream>
using namespace std ;

int main () {

    int num , originalNum,  rev_num = 0, remainder;

    cout<<" Enter an integer : ";
    cin>> num;

    originalNum = num;

    if( num < 0) {
        cout << originalNum << " is not a Palindrome number.";
    }

    while (num > 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num /= 10 ;

    }

    if ( originalNum == rev_num ) {
        cout << originalNum << " is a Palindrome number. " << endl;
    }
    else {
        cout<< originalNum << " is not a Palindrome number." << endl;
    }

    return 0 ;

}