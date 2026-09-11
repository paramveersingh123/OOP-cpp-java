//  Library Book Exchange System //
#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string title;
    int copies;

    void exchange(Book &b)
    {
        int temp;
        string tempTitle;       

        temp = id;
        id = b.id;
        b.id = temp;

        temp = copies;
        copies = b.copies;
        b.copies = temp;

        tempTitle = title;
        title = b.title;
        b.title = tempTitle;
    }
};

Book moreCopies(Book b1, Book b2)
{
    if(b1.copies > b2.copies) {
        return b1;
    }
    else{
        return b2;
    }
}

int main()
{
    Book b1, b2, b3;

    b1.id = 101;
    b1.title = "C++";
    b1.copies = 4;

    b2.id = 102;
    b2.title = "Java";
    b2.copies = 6;

    b1.exchange(b2);

    cout << "Book 1: " << b1.id << " Title: " << b1.title << " Copies: " << b1.copies << endl;
    cout << "Book 2: " << b2.id << " Title: " << b2.title << " Copies: " << b2.copies << endl;

    b3 = moreCopies(b1, b2);

    cout << "More copies: " << b3.title << endl;

    return 0;
}