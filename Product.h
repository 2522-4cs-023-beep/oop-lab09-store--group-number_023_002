#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }

    double stockValue() const {
        return price * quantity;
    }

    bool operator<(const Product& other) const {
        return price < other.price;
    }

    bool operator>(const Product& other) const {
        return price > other.price;
    }

    bool operator==(const Product& other) const {
        return name == other.name;
    }

    friend ostream& operator<<(ostream& out, const Product& p) {
        out << p.name << " | Rs. " << p.price << " | qty " << p.quantity;
        return out;
    }
};

#endif