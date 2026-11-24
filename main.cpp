#include <iostream>
#include <string>
#include "DynamicArray.h"
#include "Product.h"
#include "Algorithms.h"
using namespace std;

void addProduct(DynamicArray<Product>& store) {
    string name;
    double price;
    int qty;
    cout << "Name, price, quantity: ";
    cin >> name >> price >> qty;
    store.add(Product(name, price, qty));
    cout << name << " added" << endl;
}

void removeProduct(DynamicArray<Product>& store) {
    string name;
    cout << "Name to remove: ";
    cin >> name;
    int idx = findIndex(store, Product(name));
    if (idx != -1 && store.removeAt(idx)) {
        cout << name << " removed" << endl;
    } else {
        cout << name << " not found" << endl;
    }
}

void showProducts(DynamicArray<Product>& store) {
    if (store.isEmpty()) {
        cout << "Store is empty" << endl;
        return;
    }
    printAll(store);
}

int main() {
    DynamicArray<Product> store;
    store.add(Product("Pen", 50, 100));
    store.add(Product("Notebook", 120, 40));
    store.add(Product("Bag", 900, 10));

    int choice;
    do {
        cout << "\n1. Add 2. Remove 3. Show 4. Sort 5. Most expensive 6. Total value 0. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(store); break;
            case 2: removeProduct(store); break;
            case 3: showProducts(store); break;
            case 0: cout << "Goodbye" << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    return 0;
}