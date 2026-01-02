/*
    Problem:
        Implement different operations on a vector A .
        The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
        A query can be of five types 
            1. a x (Adds an element x to the vector A at the end )
            2. b (Sorts the vector A in ascending order )
            3. c (Reverses the vector A)
            4. d (prints the size of the vector)
            5. e (prints space separated values of the vector)
            6. f (Sorts the vector A in descending order)
    Expected Output:
        The output for each test case will  be space separated integers denoting the results of each query
    Examples:
        Input
            2
            6
            a 4 a 6 a 7 b c e
            4
            a 55 a 11 d e
        Output
            7 6 4
            2 55 11
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    /*inserts an element x at
    the back of the vector A */
    vector<int> A = {'a'};
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    A.push_back(x);
    for(int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    /*sort the vector A in ascending order*/
    vector<int> A1 = {6, 7, 5};
    sort(A1.begin(), A1.end());
    cout << "Sorted Vector (Ascending): ";
    for(int i = 0; i < A1.size(); i++) {
        cout << A1[i] << " ";
    }
    cout << endl;

    /*reverses the vector A*/
    vector<int> A2 = {5, 6, 7};
    reverse(A2.begin(), A2.end());
    for (int i = 0; i < A2.size(); i++) {
        cout << A2[i] << " ";
    }
    cout << endl;

    /*returns the size of the vector  A */
    vector<int> A3 = {5, 6, 7};
    cout << A3.size() << endl;

    /*sorts the vector A in descending order*/
    vector<int> A4 = {6, 7, 5};
    int n = A4.size();   // correct way to get size
    sort(A4.begin(), A4.end(), greater<int>());
    cout << "Sorted Vector (Descending): ";
    for (int i = 0; i < n; i++) {
        cout << A4[i] << " ";
    }
    cout << endl;
    
    /*prints space separated
    elements of vector A*/
    vector<int> A5 = {4,5,6};
    for(int i = 0; i < A5.size(); i++) {
        cout << A5[i] << " ";
    }
    cout << endl;
}