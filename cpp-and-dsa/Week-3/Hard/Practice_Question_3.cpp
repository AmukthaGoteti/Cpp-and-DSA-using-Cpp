/*
    Problem Statement:
        You are given an integer mountain array arr of length n where the values 
        increase to a peak element and then decrease.
        Return the index of the peak element.
        Your task is to solve it in O(log(n)) time complexity.

    Examples:
        Input: arr = [0,1,0]
        Output: 1

        Input: arr = [0,2,1,0]
        Output: 1

        Input: arr = [0,10,5,2]
        Output: 1
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter an array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maximum = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
            maxIndex = i;
        }
    }
    cout << "Maximum element index: " << maxIndex << endl;
}