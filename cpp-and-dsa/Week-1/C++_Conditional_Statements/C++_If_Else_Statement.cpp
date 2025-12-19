// The if statement alone tells us that if a condition is true 
// it will execute a block of statements.
// But what if we want to execute some other block of statements 
// when the condition is false? This is where the else statement comes in.

#include <iostream>
using namespace std;
int main() {
    int i = 10;
    // if statement
    if (i < 15) {
        cout << "10 is less than 15" << endl;
    }
    // Else statement 
    else {
        cout << "10 is not less than 15" << endl;
    }

    // Check for odd and even number
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is an even number." << endl;
    }
    else {
        cout << n << " is an odd number." << endl;
    }

    // Find the largest three numbers
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) {
            cout << a << " is the largest number." << endl;
        }
        else {
            cout << c << " is the largest number." << endl;
        }
    }
    else {
        if (b >= c) {
            cout << b << " is the largest number." << endl;
        }
        else {
            cout << c << " is the largest number." << endl;
        }
    }
}