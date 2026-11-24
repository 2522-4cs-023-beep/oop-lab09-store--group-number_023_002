#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <iostream>
#include "DynamicArray.h"
using namespace std;

template <typename T>
void printAll(DynamicArray<T>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << i + 1 << ". " << arr[i] << endl;
    }
}

template <typename T>
int findIndex(DynamicArray<T>& arr, const T& value) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

template <typename T>
void sortAscending(DynamicArray<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
T maxItem(DynamicArray<T>& arr) {
    T largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

#endif