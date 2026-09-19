// Mixed Problem //
#include<iostream>
using namespace std;

class Book {
    private:
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

    public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Name: ";
        cin >> bookName;

        cout << "Enter Price: ";
        cin >> price;

        totalBooks++;
    }

    inline float discountPrice() {
        return price - (price * 10 / 100);
    }

    bool operator>(Book b) {
        return price > b.price;
    }

    friend void displayCostlier(Book b);

    static void displayTotalBooks() {
        cout << "Total Books = " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

void displayCostlier(Book b) {
    cout << "Costlier Book:" << endl;
    cout << "ID: " << b.bookID << endl;
    cout << "Name: " << b.bookName << endl;
    cout << "Price: " << b.price << endl;

    cout << "Discounted Price = "
         << b.discountPrice() << endl;
}

int main() {

    Book b1, b2;

    cout << "Enter details of Book 1: " << endl;
    b1.input();

    cout << "Enter details of Book 2: " << endl;
    b2.input();

    if (b1 > b2) {
        displayCostlier(b1);
    }
    else {
        displayCostlier(b2);
    }

    Book::displayTotalBooks();

    return 0;
}