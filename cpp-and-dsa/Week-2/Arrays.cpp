// An Array is a collection of elements of same type placed in contiguous memory locations.
// It allows you to store multiple values under a single name and access them using an index.

#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing an array of size 5
    int arr[5] = {2, 4, 8, 12, 16};
    // Printing array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}