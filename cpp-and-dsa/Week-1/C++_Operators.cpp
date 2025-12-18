// C++ operators are the symbols that operate on values to 
// perform specific mathematical or logical computations on given values.

#include <iostream>
using namespace std;

int main() {

    int a = 10 + 20;

    cout << a << endl;
    // C++ operators are classified into 6 types

    // Arithmetic Operators
    // Arithmetic Operators are used to perform arithmetic or mathematical operations on the operands.
    /*
        Addition, +, Adds two operands
        Subtraction, -, Subtracts second operand from the first
        Multiplication, *, Multiplies two operands
        Division, /, Divides first operand by the second operand
        Modulo Operation, %, Returns the remainder of an integer division
        Increment, ++, Increases the value of operand by 1
        Decrement, --, Decreases the value of operand by 1
    */

    int b = 8, c = 3;
    // Addition
    cout << "b + c = " << (b + c) << endl;
    // Subtraction
    cout << "b - c = " << (b - c) << endl;
    // Multiplication
    cout << "b * c = " << (b * c) << endl;
    // Division
    cout << "b / c = " << (b / c) << endl;
    // Modulo
    cout << "b % c = " << (b % c) << endl;
    // Increament
    cout << "++b = " << (++b) << endl;
    //Decreament
    cout << "--c = " << (--c) << endl;

    /*
        The Modulo operator (%) operator should only be used with integers. 
        Other operators can also be used with floating point values. 
        ++a and a++, both are increment operators, however, both are slightly different. 
        In ++a, the value of the variable is incremented first and then 
        it is used in the program. 
        In a++, the value of the variable is assigned first and then it is incremented. 
        Similarly happens for the decrement operator.
    */
    return 0;
}