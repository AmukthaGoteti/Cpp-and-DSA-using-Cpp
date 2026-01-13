/*
    Problem Statement:
        Given an array nums of n integers, 
        return an array of all the unique 
        quadruplets [nums[a], nums[b], nums[c], nums[d]] 
        such that:
            0 <= a, b, c, d < n
            a, b, c, and d are distinct.
            nums[a] + nums[b] + nums[c] + nums[d] == target

    Examples:
        Input: nums = [1,0,-1,0,-2,2], target = 0
        Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

        Input: nums = [2,2,2,2,2], target = 8
        Output: [[2,2,2,2]]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> result;
    // Try all quadruples
    for (int a = 0; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            for (int c = b + 1; c < n; c++) {
                for (int d = c + 1; d < n; d++) {
                    if (nums[a] + nums[b] + nums[c] + nums[d] == target) {
                        vector<int> quad = {nums[a], nums[b], nums[c], nums[d]};
                        // Sort quad manually using only for & if (simple bubble sort)
                        for (int i = 0; i < 4; i++) {
                            for (int j = 0; j < 3; j++) {
                                if (quad[j] > quad[j+1]) {
                                    int tmp = quad[j];
                                    quad[j] = quad[j+1];
                                    quad[j+1] = tmp;
                                }
                            }
                        }
                        result.push_back(quad);
                    }
                }
            }
        }
    }
    // Sort result lexicographically (again bubble sort with for+if)
    int m = result.size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = 0; k < 4; k++) {
                if (result[j][k] < result[j+1][k]) break;
                if (result[j][k] > result[j+1][k]) {
                    auto tmp = result[j];
                    result[j] = result[j+1];
                    result[j+1] = tmp;
                    break;
                }
            }
        }
    }
    // Remove duplicates manually
    vector<vector<int>> uniqueRes;
    for (int i = 0; i < m; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueRes.size(); j++) {
            bool same = true;
            for (int k = 0; k < 4; k++) {
                if (result[i][k] != uniqueRes[j][k]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueRes.push_back(result[i]);
        }
    }
    return uniqueRes;
}

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> ans = fourSum(nums, target);
    if (ans.size() > 0) {
        for (int i = 0; i < ans.size(); i++) {
            cout << "[" << ans[i][0] << ", " << ans[i][1] << ", " << ans[i][2] << ", " << ans[i][3] << "]\n";
        }
    } else {
        cout << "No solution found\n";
    }
    return 0;
}