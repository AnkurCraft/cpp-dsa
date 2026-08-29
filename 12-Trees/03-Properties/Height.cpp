#include <iostream>
#include <algorithm>
using namespace std;

struct Node{int data;Node*left;Node*right;Node(int x):data(x),left(nullptr),right(nullptr){}};
int height(Node*root){return root?1+max(height(root->left),height(root->right)):0;}
void destroy(Node*root){if(!root)return;destroy(root->left);destroy(root->right);delete root;}
int main(){Node*r=new Node(1);r->left=new Node(2);r->right=new Node(3);r->left->left=new Node(4);cout<<height(r)<<'\n';destroy(r);}
