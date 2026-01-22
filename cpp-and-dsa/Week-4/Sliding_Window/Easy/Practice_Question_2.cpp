/*
    Problem Statement:
        You are given a 0-indexed integer array nums, 
        where nums[i] represents the score of 
        the ith student. You are also given an integer k.
        Pick the scores of any k students from 
        the array so that the difference 
        between the highest and the 
        lowest of the k scores is minimized.
        Return the minimum possible difference.
    
    Examples:
        Input: nums = [90], k = 1
        Output: 0
        Explanation: There is one 
                     way to pick score(s) of one student:
                     - [90]. 
                     The difference between 
                     the highest and lowest score 
                     is 90 - 90 = 0.
                     The minimum possible 
                     difference is 0.
        
        Input: nums = [9,4,1,7], k = 2
        Output: 2
        Explanation: There are six ways 
                     to pick score(s) of two students:
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 9 - 4 = 5.
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 9 - 1 = 8.
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 9 - 7 = 2.
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 4 - 1 = 3.
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 7 - 4 = 3.
                     - [9,4,1,7]. 
                     The difference between 
                     the highest and lowest 
                     score is 7 - 1 = 6.
                     The minimum 
                     possible difference is 2.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // skip same element
            int diff = nums[i] - nums[j];
            cout << nums[i] << " - " << nums[j] << " = " << diff << endl;
        }
    }
    int minDiff = INT_MAX;
    for (int i = 0; i < n - k + 1; i++) {
        int diff = nums[i + k - 1] - nums[i];
        minDiff = min(minDiff, diff);
    }
    cout << "Minimum difference is: " << minDiff << endl;
}