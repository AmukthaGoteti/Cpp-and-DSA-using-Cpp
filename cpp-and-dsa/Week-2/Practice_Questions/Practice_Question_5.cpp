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