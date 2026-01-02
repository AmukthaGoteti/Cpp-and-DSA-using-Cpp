/*
    Problem:
        You are asked to build a queue that stores integers.
        The queue must follow the FIFO rule (First In, First Out)
        and can be implemented using either an array or a singly linked list.
        Your task is to support basic queue operations:
            Add an element to the back of the queue
            Remove and return the element from the front
            View the front element without removing it
            Check whether the queue is empty
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* frontNode;
    Node* rearNode;

public:
    Queue() {
        frontNode = rearNode = nullptr;
    }

    // Destructor to free memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() {
        return frontNode == nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);

        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
            return;
        }

        rearNode->next = newNode;
        rearNode = newNode;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }

        Node* temp = frontNode;
        int value = temp->data;

        frontNode = frontNode->next;

        if (frontNode == nullptr) {
            rearNode = nullptr;
        }

        delete temp;
        return value;
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }
        return frontNode->data;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.front() << endl;   // 10
    cout << q.dequeue() << endl; // 10
    cout << q.dequeue() << endl; // 20
    cout << q.isEmpty() << endl; // 0 (false)
    cout << q.dequeue() << endl; // 30
    cout << q.dequeue() << endl; // -1

    return 0;
}