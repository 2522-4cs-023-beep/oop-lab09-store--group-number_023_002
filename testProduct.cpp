#include <iostream>
#include "Product.h"
#include "DynamicArray.h"
#include "Algorithms.h"
using namespace std;

int main() {
    Product p1("Pen", 50, 100);
    Product p2("Bag", 900, 10);
    Product p3("Pen", 60, 5);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << "Pen < Bag (by price)? " << (p1 < p2) << endl;
    cout << "Pen == Pen (by name)? " << (p1 == p3) << endl;

    DynamicArray<int> arr;
    arr.add(30);
    arr.add(10);
    arr.add(20);

    sortAscending(arr);
    printAll(arr);
    cout << "Max: " << maxItem(arr) << ", index of 20: " << findIndex(arr, 20) << endl;

    return 0;
}