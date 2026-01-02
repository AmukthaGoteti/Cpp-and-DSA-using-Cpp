/*
    Implement a Stack Data Structure specifically to store integer data using two Queues.
    There should be two data members, both being Queues to store the data internally. You may use the inbuilt Queue.
    Implement the following public functions :
        1. Constructor:
            It initializes the data members(queues) as required.
        2. push(data) :
            This function should take one argument of type integer. It pushes the element into the stack and returns nothing.
        3. pop() :
            It pops the element from the top of the stack and, in turn, returns the element being popped or deleted. In case the stack is empty, it returns -1.
        4. top :
            It returns the element being kept at the top of the stack. In case the stack is empty, it returns -1.
        5. size() :
            It returns the size of the stack at any given instance of time.
        6. isEmpty() :
            It returns a boolean value indicating whether the stack is empty or not.
            Operations Performed on the Stack:
        Query-1(Denoted by an integer 1): Pushes an integer data to the stack. (push function)
        Query-2(Denoted by an integer 2): Pops the data kept at the top of the stack and returns it to the caller. (pop function)
        Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the top of the stack but doesn't remove it, unlike the pop function. (top function)
        Query-4(Denoted by an integer 4): Returns the current size of the stack. (size function)
        Query-5(Denoted by an integer 5): Returns a boolean value denoting whether the stack is empty or not. (isEmpty function)
*/

#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int capacity;
    int topIndex;

public:
    Stack() {
        capacity = 10;          // initial capacity
        arr = new int[capacity];
        topIndex = -1;
    }

    int getSize() {
        return topIndex + 1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    void push(int element) {
        if (topIndex == capacity - 1) {
            // resize array
            int *newArr = new int[capacity * 2];
            for (int i = 0; i < capacity; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity *= 2;
        }
        arr[++topIndex] = element;
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
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack size: " << s.getSize() << endl;
    cout << "Top element: " << s.top() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Stack size after pop: " << s.getSize() << endl;

    return 0;
}