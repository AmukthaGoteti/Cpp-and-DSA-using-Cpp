/*
    Given a non-empty array of non-negative 
    integers nums, the degree of this array 
    is defined as the maximum frequency of any 
    one of its elements.

    Your task is to find the smallest 
    possible length of a (contiguous) 
    subarray of nums, 
    that has the same degree as nums.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> freq;
    unordered_map<int, int> first;
    unordered_map<int, int> last;

    int degree = 0;

    // Track frequency, first index, and last index
    for (int i = 0; i < n; i++) {
        int val = nums[i];
        freq[val]++;
        if (!first.count(val)) first[val] = i;
        last[val] = i;
        degree = max(degree, freq[val]);
    }

    // Compute shortest subarray with same degree
    int minLength = n;
    for (auto &p : freq) {
        if (p.second == degree) {
            int val = p.first;
            int length = last[val] - first[val] + 1;
            minLength = min(minLength, length);
        }
    }

    cout << minLength << endl;
    return 0;
}