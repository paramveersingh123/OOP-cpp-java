// Shopping Cart Billing System //
#include<iostream>
using namespace std;

class Product {
    public:
    string name;
    int price;
    int quantity;

    Product combine(Product p) {
        Product r;

        r.name = name;
        r.price = price;
        r.quantity = quantity + p.quantity;

        return r;
    }
};

    Product higherValue(Product p1, Product p2) {
        if (p1.price*p1.quantity > p2.price*p2.quantity) {
            return p1;
        }
        else {
            return p2;
        }
    }

    int main() {
        Product p1,p2,p3;

        p1.name = "Pen";
        p1.price = 10;
        p1.quantity = 10;

        p2.name = "Book";
        p2.price = 100;
        p2.quantity = 5;

        p3 = higherValue(p1,p2);
        cout<<" Product with higher value: "<<p3.name<<endl;

        p3 = p1.combine(p2);
        cout<<" Combined Invertory: "<<p3.quantity<<endl;

        return 0;

    }