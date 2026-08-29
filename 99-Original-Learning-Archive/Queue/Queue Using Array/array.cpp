#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = 0;
    }

    void push(int x) {
        arr[rear++] = x;
    }

    void pop() {
        front++;
    }

    int getFront() {
        return arr[front];
    }

    bool empty() {
        return front == rear;
    }
};