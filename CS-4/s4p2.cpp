// Maximum Finder //
#include<iostream>
using namespace std;

class Maximum {
    public:
    int num;

    void max(int num1, int num2) {
        if (num1 > num2) {
            cout<< num1 <<" is larger. "<< endl;
        }
        else{
            cout<< num2 <<" is larger. "<< endl;
        }
    }

    void max(int num1, int num2, int num3) {
        if(num1>num2 && num1>num3) {
            cout<< num1 <<" is greatest. "<< endl;
        }
        if(num2>num1 && num2>num3) {
            cout<< num2 <<" is greatest. "<< endl;
        }
        else{
            cout<< num3 <<" is greatest. "<<endl;
        }
    }

    void max(double num1, double num2)  {
        if (num1 > num2) {
            cout<< num1 <<" is larger. "<< endl;
        }
        else{
            cout<< num2 <<" is larger. "<< endl;
        }
    }
};

int main() 
{
    Maximum m;

    m.max(6,9);
    m.max(12,18,21);
    m.max(4.8,6.7);

    return 0;
}