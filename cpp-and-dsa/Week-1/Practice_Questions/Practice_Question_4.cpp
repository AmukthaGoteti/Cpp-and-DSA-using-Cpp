/*
    Problem:
        Given two integers A and B. Your task is to return their product.
    Example 1:
        Input:
            A = 1, B = 2
        Output:
            2
        Explanation:
            Multiplication of 1 and 2 is 2.
        
    Example 2:

        Input:
            A = 8, B = 7
        Output:
            56
        Explanation:
            Multiplication of 8 and 7 is 56.
*/
#include <iostream>
using namespace std;

int main() {
    int A, B;

    cin >> A >> B;

    int Result = A * B;
    cout << Result << endl;
}