#include <iostream>
using namespace std;

struct Node{int data;Node*l,*r;Node(int x):data(x),l(nullptr),r(nullptr){}};
Node* insert(Node*r,int x){if(!r)return new Node(x);if(x<r->data)r->l=insert(r->l,x);else if(x>r->data)r->r=insert(r->r,x);return r;}
Node* minimum(Node*r){while(r->l)r=r->l;return r;}
Node* erase(Node*r,int x){
    if(!r)return nullptr;
    if(x<r->data)r->l=erase(r->l,x);
    else if(x>r->data)r->r=erase(r->r,x);
    else{
        if(!r->l){Node*t=r->r;delete r;return t;}
        if(!r->r){Node*t=r->l;delete r;return t;}
        Node*t=minimum(r->r);r->data=t->data;r->r=erase(r->r,t->data);
    }
    return r;
}
void inorder(Node*r){if(!r)return;inorder(r->l);cout<<r->data<<' ';inorder(r->r);}
void destroy(Node*r){if(!r)return;destroy(r->l);destroy(r->r);delete r;}
int main(){Node*r=nullptr;for(int x:{5,3,7,2,4,6,8})r=insert(r,x);r=erase(r,5);inorder(r);destroy(r);}
