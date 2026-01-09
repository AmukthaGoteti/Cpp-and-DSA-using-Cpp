/*
    Problem Statement:
        You are given a large integer represented as 
        an integer array digits, where each digits[i] 
        is the ith digit of the integer. 
        The digits are ordered from most 
        significant to least significant 
        in left-to-right order. 
        The large integer does not contain any leading 0's.
        Increment the large integer 
        by one and return the resulting array of digits.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for(int i = 0; i < digits.size(); i++) {
        cin >> digits[i];
    }
    digits.back()++;
    for (int x : digits) {
        cout << x << " ";
    }
    cout << endl;
}