// Library Management System //
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
};

class EBook : public Book {
public:
    string file_format;
    int file_size;

    void inputDetails() {
        cout << "Enter Title: ";
        getline(cin>>ws,title);

        cout << "Enter Author: ";
        getline(cin>>ws,author);

        cout << "Enter File Size in mb: ";
        cin >> file_size;

        cout << "Enter File Format: ";
        cin >> file_format;
    }

        void displayDetails() {
        cout << title << " " << author << " " << file_size << " " << file_format << endl;
        }
};

int main() {
    EBook b[3];

    for(int i = 0; i < 3; i++) {
        b[i].inputDetails();
    }
    cout<<" BOOK DETAILS: "<< endl;

    for(int i = 0; i < 3; i++) {
        b[i].displayDetails();
}
    return 0;
}