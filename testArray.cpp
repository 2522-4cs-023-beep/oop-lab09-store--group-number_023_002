#include <iostream>
#include <string>
#include "DynamicArray.h"
using namespace std;

int main() {
    DynamicArray<int> nums;
    nums.add(10);
    nums.add(20);
    nums.add(30);
    nums.add(40);
    nums.add(50);

    cout << "Size: " << nums.size() << endl;
    nums.removeAt(1);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nums[0] = 99;
    cout << "First: " << nums[0] << endl;

    nums[7];

    DynamicArray<string> words;
    words.add("template");
    words.add("works");
    cout << words[0] << " " << words[1] << endl;

    return 0;
}