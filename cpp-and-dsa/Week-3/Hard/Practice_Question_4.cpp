/*
    Problem Statement:
        Given an integer array nums, find the subarray with the largest sum, and return its sum.
    
    Examples:
        Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
        Output: 6
        Explanation: The subarray [4,-1,2,1] has the largest sum 6.

        Input: nums = [1]
        Output: 1
        Explanation: The subarray [1] has the largest sum 1.

        Input: nums = [5,4,-1,7,8]
        Output: 23
        Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
}