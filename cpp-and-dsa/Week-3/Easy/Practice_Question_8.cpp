/*
    Problem Statement:
        Given a binary array nums, 
        return the maximum number of 
        consecutive 1's in the array.
    
    Examples:
        Input: nums = [1,1,0,1,1,1]
        Output: 3
        Explanation: The first two digits or the last 
        three digits are consecutive 1s. 
        The maximum number of consecutive 1s is 3.

        Input: nums = [1,0,1,1,0,1]
        Output: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Read the number of elements: ";
    cin >> n;
    // Read the number of elements
    vector<int> nums(n);
    cout << "Create a vector of size n: ";
    // Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        // Read each element (0 or 1)
    }
    int currentCount = 0;
    // Stores the current streak of consecutive 1s
    int maxCount = 0;
    // Stores the maximum streak found so far
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            currentCount++;
            // Increment current streak if 1 is found
            maxCount = max(maxCount, currentCount);
            // Update maximum streak
        } else {
            currentCount = 0;
            // Reset streak when 0 is found
        }
    }
    cout << maxCount << endl;
    // Output the maximum number of consecutive 1s
    return 0;
}