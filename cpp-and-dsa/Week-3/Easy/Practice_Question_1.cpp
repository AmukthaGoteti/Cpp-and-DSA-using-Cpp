/*
    Practice Problem:
        You are given an given array arr[] consisting
        of positive integers.
        Return the maximum of every adjacent pairs in the array.
    Examples:
        Input: arr[] = [1, 2, 2, 3, 4, 5]
        Output: [2, 2, 3, 4, 5]
        Explanation: Maximum of arr[0] and arr[1] is 2, 
                    that of arr[1] and arr[2] is 2, ... and so on.
        
        Input: arr[] = [5, 5]
        Output: [5]
        Explanation: We only have two elements so max of 
                    5 and 5 is 5 only.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> maxAdj(vector<int> &arr) {
    vector<int> result;
    for(int i = 0; i < arr.size() - 1; i++){
        result.push_back(max(arr[i], arr[i + 1]));
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = maxAdj(arr);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}