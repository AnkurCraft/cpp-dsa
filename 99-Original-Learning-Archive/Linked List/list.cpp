#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void deleteNode(Node* head, int key) {
    Node* temp = head, *prev = NULL;
    while (temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) {
        cout << "Key " << key << " not found!\n";
        return;
    }
    prev->next = temp->next;
    delete temp;
    cout << "Deleted " << key << endl;
}

void insertAtEnd(Node* head, int val) {
    Node* temp = head;
    while (temp->next) 
        temp = temp->next;
    temp->next = new Node(val);
    cout << "Inserted " << val << " at end\n";
}

Node* insertAtHead(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    cout << "Inserted " << val << " at head\n";
    return newNode;
}

void display(Node* head) {
    cout << "List: ";
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    // Create initial list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    display(head);
    
    // Insert at end
    insertAtEnd(head, 40);
    display(head);
    
    // Insert at head
    head = insertAtHead(head, 5);
    display(head);
    
    // Delete node
    deleteNode(head, 20);
    display(head);
    
    // Try deleting non-existent node
    deleteNode(head, 100);
    
    return 0;
}