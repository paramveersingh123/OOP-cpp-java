// To Reverse A number
#include <iostream>
using namespace std ;

int main () {

    int i , rev_num = 0, remainder;

    cout<<" Enter an integer : ";
    cin>>i;

    while (i != 0) {
        remainder = i % 10;
        rev_num = rev_num * 10 + remainder;
        i /= 10 ;

    }

    cout<< " Reversed Number = " << rev_num;

    return 0 ;

}