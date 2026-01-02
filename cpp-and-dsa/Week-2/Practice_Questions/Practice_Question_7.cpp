/*
    Problem:
        You’re given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.
        We can only use the following functions on this stack S.
            is_empty(S) : Tests whether stack is empty or not.
            push(S) : Adds a new element to the stack.
            pop(S) : Removes top element from the stack.
            top(S) : Returns value of the top element. Note that this function does not remove elements from the stack.
*/

#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int element) {
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertSorted(st, element);

    st.push(topElement);
};

void sortStack(stack<int> &st) {
    if (st.empty()) {
        return;
    }

    int topElement = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, topElement);
};

int main() {
    stack<int> st;

    // Sample input
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(5);

    // Sort the stack
    sortStack(st);

    // Print sorted stack (top to bottom)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}