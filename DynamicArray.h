#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class DynamicArray {
private:
    T* data;
    int count;
    int capacity;
    T invalidItem;

    void grow() {
        capacity *= 2;
        T* bigger = new T[capacity];
        for (int i = 0; i < count; i++) {
            bigger[i] = data[i];
        }
        delete[] data;
        data = bigger;
    }

public:
    DynamicArray(int cap = 2);
    ~DynamicArray();

    void add(const T& value);
    bool removeAt(int index);
    T& operator[](int index);
    int size() const;
    bool isEmpty() const;
};

template <typename T>
DynamicArray<T>::DynamicArray(int cap) {
    capacity = (cap < 1) ? 1 : cap;
    count = 0;
    data = new T[capacity];
    invalidItem = T();
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
    data = nullptr;
}

template <typename T>
void DynamicArray<T>::add(const T& value) {}

template <typename T>
bool DynamicArray<T>::removeAt(int index) { return false; }

template <typename T>
T& DynamicArray<T>::operator[](int index) { return invalidItem; }

template <typename T>
int DynamicArray<T>::size() const { return 0; }

template <typename T>
bool DynamicArray<T>::isEmpty() const { return true; }

#endif