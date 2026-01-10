/*
    Probelem Statement:
        Given an array of positive integers. 
        Your task is to rearrange the array elements 
        alternatively i.e. first element should 
        be the max value, the second should be the min value, 
        the third should be the second max, 
        the fourth should be the second min, and so on.
        Note: Modify the original array itself. 
        Do it without using any extra space. 
        You do not have to return anything.

    Examples:
        Input: arr[] = [1, 2, 3, 4, 5, 6]
        Output: [6, 1, 5, 2, 4, 3]
        Explanation: 
            Max element = 6, min = 1, 
            second max = 5, second min = 2, 
            and so on... 
            The modified array is: [6, 1, 5, 2, 4, 3]
        
        Input: arr[]= [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
        Output: [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]
        Explanation: 
            Max element = 110, min = 10, second max = 100, 
            second min = 20, and so on... 
            Modified array is : 
                [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]
        
        Input: arr[]= [1]
        Output: [1]
*/

#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    sort(arr.begin(), arr.end());

    int maxIdx = n - 1;
    int minIdx = 0;
    long long maxElem = (long long)arr[n - 1] + 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] += (arr[maxIdx] % maxElem) * maxElem;
            maxIdx--;
        } else {
            arr[i] += (arr[minIdx] % maxElem) * maxElem;
            minIdx++;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] /= maxElem;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    rearrange(arr);
    for (int x : arr) cout << x << " ";
    cout << endl;
}