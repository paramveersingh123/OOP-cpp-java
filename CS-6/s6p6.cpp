//  Voting Eligibility Checker //
#include<iostream>
#include<exception>
using namespace std;

class VotingEligibilityException : public exception {
    public:
     
    const char *what() const noexcept {
        return " Error: Not eligible for voting.";
    }
};

int main() {
    int age;
    cout<<" Enter age: ";
    cin>>age;

    try{
        if(age<18)
        throw VotingEligibilityException();

        else{
            cout<<" Person is eligible for voting .";
        }
    }
    catch (VotingEligibilityException &v) {
        cout<<v.what()<<endl;
    }

    return 0;
}