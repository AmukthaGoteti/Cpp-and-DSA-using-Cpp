// In C++, a switch statement checks a value and runs the matching block of code, using break to stop 
// and default if no case matches
#include <iostream>
using namespace std;
int main() {
    // Variable to the used as switch expression
    char x = 'A';
    // Switch expression
    switch (x) {
        // Case Statements
        case'A':
            cout << "A" << endl;
            break;
        case'B':
            cout << "B" << endl;
            break;
        default:
            cout << "Not A or B" << endl;
            break;
    }

    // When using the switch statement in C++, there are few rules to keep in mind:
    // The case values must be of int or char type.
    // You can have as many case blocks as needed.
    // Duplicate case values are not allowed.
    /* 
        A break statement is optional in each case. 
        However it is recommended to use it 
        otherwise the following non-matching cases would be executed until a break is found.
    */

    // Print Day Name
    int day;
    cout << "Enter Day Number (1-7): ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Day Number" << endl;
            break;
    }

    // Simple Calculator using Switch Case
    char operation;
    int num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
            break;
        default:
            cout << "Error! operator is not correct" << endl;
            break;
    }

    // C++ allows nested switch statements, meaning that we can add another switch case inside another switch case.
    // However, it is not a common practice and should be used judiciously to maintain code readability.
    return 0;
}