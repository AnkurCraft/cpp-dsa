#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{int data;Node*l,*r;Node(int x):data(x),l(nullptr),r(nullptr){}};
vector<int> rightView(Node*root){
    vector<int>ans;if(!root)return ans;queue<Node*>q;q.push(root);
    while(!q.empty()){int n=q.size();for(int i=0;i<n;++i){Node*x=q.front();q.pop();if(x->l)q.push(x->l);if(x->r)q.push(x->r);if(i==n-1)ans.push_back(x->data);}}
    return ans;
}
int main(){Node*r=new Node(1);r->l=new Node(2);r->r=new Node(3);for(int x:rightView(r))cout<<x<<' ';delete r->l;delete r->r;delete r;}
