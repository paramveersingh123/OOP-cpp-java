#include<iostream>
#include<string>

using namespace std;

class Text {
    private:
    string str;

    public:

    Text( string s) {
        str = s;
    }

    int calculateLength() {
        int count = 0;

        for(char c : str) {
            count++;
        }
        return count;
    }
};

int main() {
    string s1;

    cout<<" Enter a string: ";
    getline(cin, s1);

    Text myText(s1);
    cout<<" The length of the string is: "<<myText.calculateLength()<<endl;
    return 0;

}