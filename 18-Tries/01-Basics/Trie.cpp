#include <iostream>
#include <array>
#include <string>
using namespace std;

class Trie{
    struct Node{
        array<Node*,26> child{};
        bool terminal=false;
        Node(){child.fill(nullptr);}
    };
    Node* root=new Node();

    void destroy(Node*n){if(!n)return;for(auto p:n->child)destroy(p);delete n;}
public:
    ~Trie(){destroy(root);}
    void insert(const string&s){
        Node*cur=root;
        for(char c:s){int i=c-'a';if(!cur->child[i])cur->child[i]=new Node();cur=cur->child[i];}
        cur->terminal=true;
    }
    bool search(const string&s)const{
        Node*cur=root;
        for(char c:s){int i=c-'a';if(!cur->child[i])return false;cur=cur->child[i];}
        return cur->terminal;
    }
    bool startsWith(const string&s)const{
        Node*cur=root;
        for(char c:s){int i=c-'a';if(!cur->child[i])return false;cur=cur->child[i];}
        return true;
    }
};
int main(){Trie t;t.insert("apple");cout<<boolalpha<<t.search("apple")<<' '<<t.startsWith("app")<<'\n';}
