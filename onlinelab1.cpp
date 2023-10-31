#include <iostream>
#include <climits>
#include<stack>
using namespace std;

#define size 15
int A[5], top = -1;

bool isempty() {
    if (top == -1)
        return true;
    else
        return false;
}

void push(int value) {
    if (top == size - 1) {
        cout << "Stack is Full" << endl;
    } else {
        top++;
        A[top] = value;
    }
}

int pop() {
    if (isempty()) {
        cout << "Stack is Empty" << endl;
        return INT_MIN;
    } else {
        int value = A[top];
        top--;
        return value;
    }
}

void show_top() {
    if (isempty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Element at top is: " << A[top] << endl;
}

void displayStack() {
    if (isempty()) {
        cout << "Stack is Empty" << endl;
    } else {
        for (int i = 0; i <= top; i++)
            cout << A[i] << " ";
        cout << endl;
    }
}

int find_and_remove_lowest() {
    if (isempty()) {
        cout << "Stack is empty" << endl;
        return INT_MIN;
    }

    int minElement = INT_MAX;
    stack<int>temp;

    while (!isempty()) {
        int element = pop();
        if (element < minElement) {
            minElement = element;
        }
        temp.push(element);
    }

    while (!temp.empty()) {
        int element = temp.top();
        temp.pop();
        if (element != minElement) {
            push(element);
        }
    }

    return minElement;
}

int main() {
    cout << "Stack elements are: ";
    push(5);
    push(2);
    push(4);
    push(7);
    displayStack();

    int minElement = find_and_remove_lowest();
    cout << "Minimum element removed: " << minElement << endl;
    cout << "Stack after removing minimum element: ";
    displayStack();

    push(2);
    push(-1);
    push(5);
    push(4);
    push(7);
    displayStack();

    minElement = find_and_remove_lowest();
    cout << "Minimum element removed: " << minElement << endl;
    cout << "Stack after removing minimum element: ";
    displayStack();


    return 0;
}
