#include<iostream>
#include<string>
using namespace std;

class Book {
    private:
    string title;
    string author;

    public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    public:
    void displayData() {
        cout<<" Title: "<< title <<endl;
        cout<<" Author: "<< author << endl;
}

};

int main() {

    Book b1(" The Jungle Book", " Robert Frost");
    b1.displayData();
    return 0;
}