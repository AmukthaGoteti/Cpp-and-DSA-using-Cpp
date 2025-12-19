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

    // Relational Operators
    // Realational Operators are used for the comparsion of the values of two operands.
    /*
        Is Equal To, ==, Checks if both operands are equal
        Greater Than, >, Checks if the left operand is greater than the right
        Greater Than or Equal To, >=, Checks if the left operand is greater than or equal to the right
        Less Than, <, Checks if the left operand is less than the right
        Less Than or Equal To, <=, Checks if the left operand is less than or equal to the right
        Not Equal To, !=, Checks if both operands are not equal
    */

    int x = 6, y = 4;
    // Equal Operator
    cout << "x == y : " << (x == y) << endl;
    // Greater Than
    cout << "x > y : " << (x > y) << endl;
    // Greater Than or Equal To
    cout << "x >= y : " << (x >= y) << endl;
    // Less Than
    cout << "x < y : " << (x < y) << endl;
    // Less Than or Equal To
    cout << "x <= y : " << (x <= y) << endl;
    // Not Equal To
    cout << "x != y : " << (x != y) << endl;

    // 0 denotes false and 1 denotes true

    // Logical Operators
    // Logical Operators are 
    // used to compare two or more conditions or contraints or to complement the evalution 
    // of the original condition in consideration.
    /*
        Logical AND, &&, Returns true if both operands are true
        Logical OR, ||, Returns true if at least one of the operands is true
        Logical NOT, !, Reverses the logical state of its operand
    */
    int d = 6, e = 4;
    // Logical AND
    cout << "d && e: " << (d && e) << endl;
    // Logical OR
    cout << "d || e: " << (d || e) << endl;
    // Logical NOT
    cout << "!d: " << (!d) << endl;

    // Bitwise Operators
    // Bitwise Operators are works on bit-level
    /*
        Bitwise AND, &, Performs bitwise AND operation
        Bitwise OR, |, Performs bitwise OR operation
        Bitwise XOR, ^, Performs bitwise XOR operation
        Bitwise NOT, ~, Performs bitwise NOT operation
        Left Shift, <<, Shifts bits to the left
        Right Shift, >>, Shifts bits to the right
    */
   // Note: Only char and int data types can be used with bitwise operators.
   int f = 6, g = 4;
   // Bitwise AND operator
   cout << "f & g: " << (f & g) << endl;
    // Bitwise OR operator
   cout << "f | g: " << (f | g) << endl;
    // Bitwise XOR operator
   cout << "f ^ g: " << (f ^ g) << endl;
    // Bitwise NOT operator
   cout << "~f: " << (~f) << endl;
    // Left Shift operator
   cout << "f << 1: " << (f << 1) << endl;
    // Right Shift operator
   cout << "f >> 1: " << (f >> 1) << endl;

   // Assignment Operators
   // Assignment Operators are used to assign values to variables.
    /*
          Assignment, =, Assigns values from right side operands to left side operand
          Add AND Assignment, +=, Adds right operand to the left operand and assigns the result to left operand
          Subtract AND Assignment, -=, Subtracts right operand from the left operand and assigns the result to left operand
          Multiply AND Assignment, *=, Multiplies right operand with the left operand and assigns the result to left operand
          Divide AND Assignment, /=, Divides left operand by the right operand and assigns the result to left operand
          Modulo AND Assignment, %=, Takes modulus using two operands and assigns the result to left operand
    */
    int h = 10, i = 5;
    // Assignment
    h = i;
    cout << "h = i: " << h << endl;
    // Add AND Assignment
    h += i;
    cout << "h += i: " << h << endl;
    // Subtract AND Assignment
    h -= i;
    cout << "h -= i: " << h << endl;
    // Multiply AND Assignment
    h *= i;
    cout << "h *= i: " << h << endl;
    // Divide AND Assignment
    h /= i;
    cout << "h /= i: " << h << endl;
    // Modulo AND Assignment
    h %= i;
    cout << "h %= i: " << h << endl;

    // Ternary Operator or Conditional Operator
    // The ternary operator is the only operator that takes three operands.
    /*
        condition ? expression1 : expression2
    */
    int j = 10, k = 20;
    int max = (j > k) ? j : k;
    cout << "Max value is: " << max << endl;

    // Miscellaneous Operators
    /*
        sizeof, Returns the size of a data type or a variable
    */
    int l = 10;
    // sizeof operator
    cout << "Size of l: " << sizeof(l) << " bytes" << endl;

    /*
        Comma Operator, ,, Used to separate multiple expressions where only one expression is expected
    */
    int m, n;
    m = (n = 5, n + 10); // n is assigned 5, then m is assigned n + 10
    cout << "Value of m: " << m << endl;

    /*
        Address-of Operator, &, Returns the memory address of a variable
    */
    int o = 10;
    cout << "Address of o: " << &o << endl;
   return 0;
}