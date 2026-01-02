/*
Stack is a data structure that follows the LIFO (Last in First out) principle. Design and implement a stack to implement the following functions:
    1. Push(num): Push the given number in the stack if the stack is not full.
    2. Pop: Remove and print the top element from the stack if present, else print -1.
    3. Top: Print the top element of the stack if present, else print -1.
    4. isEmpty: Print 1 if the stack is empty, else print 0.
    5. isFull: Print 1 if the stack is full, else print 0.
You have been given ‘m’ operations which you need to perform in the stack. Your task is to implement all the functions of the stack.
*/

#include <iostream>
using namespace std;

// Stack class.
class Stack {
private:
    int *arr;
    int capacity;
    int topIndex;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        topIndex = -1;
    }

    void push(int num) {
        if (isFull()) {
            return;
        }
        arr[++topIndex] = num;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        return arr[topIndex--];
    }

    int top() {
        if (isEmpty()) {
            return -1;
        }
        return arr[topIndex];
    }

    int isEmpty() {
        return topIndex == -1;
    }

    int isFull() {
        return topIndex == capacity - 1;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;   // 30
    cout << s.pop() << endl;   // 30
    cout << s.top() << endl;   // 20

    return 0;
}