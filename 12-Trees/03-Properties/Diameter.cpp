#include <iostream>
#include <algorithm>
using namespace std;

struct Node{int data;Node*l,*r;Node(int x):data(x),l(nullptr),r(nullptr){}};
int diameter(Node*root,int&best){
    if(!root)return 0;
    int l=diameter(root->l,best),r=diameter(root->r,best);
    best=max(best,l+r+1);
    return 1+max(l,r);
}
void destroy(Node*r){if(!r)return;destroy(r->l);destroy(r->r);delete r;}
int main(){Node*r=new Node(1);r->l=new Node(2);r->r=new Node(3);r->l->l=new Node(4);int d=0;diameter(r,d);cout<<d<<'\n';destroy(r);}
