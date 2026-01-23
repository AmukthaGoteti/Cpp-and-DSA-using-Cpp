/*
    Problem Statement:
        Given an integer array nums and an integer k, 
        return the length of the shortest non-empty subarray of nums with a sum of at least k. 
        If there is no such subarray, return -1.
        A subarray is a contiguous part of an array.
    
    Examples:
        Input: nums = [1], k = 1
        Output: 1

        Input: nums = [1,2], k = 4
        Output: -1

        Input: nums = [2,-1,2], k = 3
        Output: 3
*/

#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>
using namespace std;

int main() {
    vector<int> nums = {2, -1, 2};
    int k = 3;
    int n = nums.size();
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    deque<int> dq;
    int minLength = INT_MAX;
    for (int i = 0; i <= n; i++) {
        while (!dq.empty() && prefixSum[i] - prefixSum[dq.front()] >= k) {
            minLength = min(minLength, i - dq.front());
            dq.pop_front();
        }
        while (!dq.empty() && prefixSum[i] <= prefixSum[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    if (minLength == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minLength << endl;
    }
    return 0;
}