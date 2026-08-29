#include <iostream>
using namespace std;

// Node structure for Binary Tree
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// (A) Inorder Traversal (Left → Root → Right)
void inorder(Node* root) {
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// (B) Preorder Traversal (Root → Left → Right)
void preorder(Node* root) {
    if (root == NULL) return;
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// (C) Postorder Traversal (Left → Right → Root)
void postorder(Node* root) {
    if (root == NULL) return;
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Helper function to create a sample tree
Node* createSampleTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return root;
}

// Main function to demonstrate all traversals
int main() {
    Node* root = createSampleTree();
    
    cout << "Inorder Traversal (Left → Root → Right): ";
    inorder(root);
    cout << endl;
    
    cout << "Preorder Traversal (Root → Left → Right): ";
    preorder(root);
    cout << endl;
    
    cout << "Postorder Traversal (Left → Right → Root): ";
    postorder(root);
    cout << endl;
    
    return 0;
}