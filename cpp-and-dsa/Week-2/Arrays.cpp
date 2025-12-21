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

    /*
        We can create/declare an array by simply specifying 
        the data type first and then the name of the array with 
        its size inside [] square brackets
        (better known as array subscript operator).
        The syntax to declare an array is:
        data_type array_name [size]
        This statement will create an array with name array_name 
        that can store size elements of given data_type. 
        Once the array is declared, its size cannot be changed.
    */

    int arr1[5];
    // When we declared an array, 
    // the elements of array do not contain any valid value.

    // Initializing means assigning initial values to aaray elements.
    // We can initialize the array 
    // with values enclosed in curly braces '{}' as assigned to the array.
    int arr2[5] = {2, 4, 8, 12, 16};

    // These values will be assigned sequentially.
    // It means that 1st element (index 0) will be assigned 2,
    // 2nd element (index 1) will be assigned 4 and so on.
    // The number of values in the list cannot be more than 
    // the size of the array.
    int arr3[5] = {2, 4, 8}; // rest elements will be initialized to 0

    // The size of the array can be skipped if the size should be same
    // as the number of the values.
    int arr4[] = {2, 4, 8, 12, 16}; // size is 5

    // Moreover, all the elements can be easily initialized to 0
    int arr5[5] = {0}; // all elements will be initialized to 0
    // This method only works for 0, but not for any other value.
    return 0;
}