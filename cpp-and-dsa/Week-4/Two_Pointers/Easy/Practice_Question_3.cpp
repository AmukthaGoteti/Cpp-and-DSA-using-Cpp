/*
    Problem Statement:
        A phrase is a palindrome if, after converting all uppercase letters into lowercase 
        letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
        Alphanumeric characters include letters and numbers.
        Given a string s, return true if it is a palindrome, or false otherwise.
    
    Examples:
        Input: s = "A man, a plan, a canal: Panama"
        Output: true
        Explanation: "amanaplanacanalpanama" is a palindrome.

        Input: s = "race a car"
        Output: false
        Explanation: "raceacar" is not a palindrome.

        Input: s = " "
        Output: true
        Explanation: s is an empty string "" after removing non-alphanumeric characters.
                     Since an empty string reads the same forward and backward, it is a palindrome.
*/

#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    // Convert everything to lowercase
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c){ return tolower(c); });
    // Remove non-alphanumeric characters
    s.erase(remove_if(s.begin(), s.end(),
                      [](unsigned char c){ return !isalnum(c); }),
            s.end());
    cout << s << endl;
    // Check palindrome
    int i = 0, j = s.size() - 1;
    bool ok = true;
    while (i < j) {
        if (s[i] != s[j]) {
            ok = false;
            break;
        }
        i++;
        j--;
    }
    if (ok) cout << "True" << endl;
    else    cout << "False" << endl;
    return 0;
}