#include <iostream>

struct Node {
    int data;
    Node* next;

    explicit Node(int value) : data(value), next(nullptr) {}
};

void printList(const Node* head) {
    while (head != nullptr) {
        std::cout << head->data;
        if (head->next != nullptr) std::cout << " -> ";
        head = head->next;
    }
    std::cout << '\n';
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

void insertFront(Node*& head, int value) {
    Node* node = new Node(value);
    node->next = head;
    head = node;
}

void insertBack(Node*& head, int value) {
    Node* node = new Node(value);
    if (head == nullptr) {
        head = node;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) current = current->next;
    current->next = node;
}

bool deleteFirst(Node*& head, int value) {
    if (head == nullptr) return false;

    if (head->data == value) {
        Node* old = head;
        head = head->next;
        delete old;
        return true;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value)
        current = current->next;

    if (current->next == nullptr) return false;

    Node* old = current->next;
    current->next = old->next;
    delete old;
    return true;
}

int main() {
    Node* head = nullptr;

    insertBack(head, 10);
    insertBack(head, 20);
    insertBack(head, 30);
    insertFront(head, 5);

    printList(head);
    deleteFirst(head, 20);
    printList(head);

    deleteList(head);
}
