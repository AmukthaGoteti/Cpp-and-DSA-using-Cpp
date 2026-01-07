/*
    Problem Statement:
        Given an integer array nums, 
        move all 0's to the end of it while 
        maintaining the relative order of 
        the non-zero elements.
        Note that you must do this in-place 
        without making a copy of the array.
    
    Examples:
        Input: nums = [0,1,0,3,12]
        Output: [1,3,12,0,0]

        Input: nums = [0]
        Output: [0]
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {0,1,0,3,12};
    stable_partition(nums.begin(), nums.end(), [](int x) 
    {
        return x != 0;
    });

    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}