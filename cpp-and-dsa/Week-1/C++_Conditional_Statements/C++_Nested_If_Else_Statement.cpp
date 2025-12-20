// Nested if-else statement are those statements in which there is an if-statement inside another if-else statement.
// We use nested if-else statements when we want to check to implement multiple conditions.

#include <iostream>
using namespace std;

int main() {
    int n = 6;
    //outer statement
    if (n % 2 == 0) {
        // Inner if statement
        if (n % 3 == 0) {
            cout << n << " is divisible by 2 and 3" << endl;
        } else {
            cout << n << " is divisible by 2 but not by 3" << endl;
        }
    } 
    else {
        cout << n << " is not divisible by 2" << endl;
    }

    // Find the greatest among three numbers
    int a = 10, b = 2, c = 6;
    // outermost if else
    if (a < b) {
        // Nested if else
        if (c < b) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }
    else {
        if (c < a) {
            cout << a << endl;
        }
        else {
            cout << c << endl;
        }
    }

    // Check whether a year is leap year or not
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // Outer if else
    if (year % 4 == 0) {
        // Nested if else
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            }
            else {
                cout << year << " is not a leap year." << endl;
            }
        }
        else {
            cout << year << " is a leap year." << endl;
        }
    }
    else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}