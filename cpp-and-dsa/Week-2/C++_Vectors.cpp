// A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v; // Declaration of vector
    vector<int> v1(3,5);
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {1, 2, 3};
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;

    // A vector is defined as the std::vector class template in the <vector> header file.
    // vector<T> v;
    // where T is the data type of elements and v is the name assigned to the vector.
    // Vectors in C++ support various useful operations that allow you to add, remove, access, and modify elements dynamically.
    /*
        push_back(value) : Inserts element at the end of the vector efficiently.
        Takes constant time O(1) on average, so it's very fast.
        insert(position, value) : Inserts element at any position (beginning, middle, or end).
        Takes linear time O(n), as it shifts elements to make space.
    */
    vector<char> v3 = {'a', 'f', 'd'};
    v3.push_back('z'); // Insert at the end
    v3.insert(v3.begin() + 1, 'c');
    for (int i = 0; i< v3.size(); i++) {
        cout<< v3[i] << " ";
    }
    cout << endl;
}