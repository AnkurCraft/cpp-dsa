#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        arr[++top] = x;
    }

    void pop() {
        top--;
    }

    int peek() {
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};