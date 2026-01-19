/*
    Problem Statemenet:
        Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects 
        of the same color are adjacent, with the colors in the order red, white, and blue.
        We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
        You must solve this problem without using the library's sort function.

    Examples:
        Input: nums = [2,0,2,1,1,0]
        Output: [0,0,1,1,2,2]

        Input: nums = [2,0,1]
        Output: [0,1,2]
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements (0s, 1s, and 2s only): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}