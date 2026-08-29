#include <iostream>
using namespace std;

class DSU{
    int* parent; int* size; int n;
public:
    explicit DSU(int n):n(n){parent=new int[n];size=new int[n];for(int i=0;i<n;++i)parent[i]=i,size[i]=1;}
    ~DSU(){delete[] parent;delete[] size;}
    int find(int x){return parent[x]==x?x:parent[x]=find(parent[x]);}
    bool unite(int a,int b){a=find(a);b=find(b);if(a==b)return false;if(size[a]<size[b])swap(a,b);parent[b]=a;size[a]+=size[b];return true;}
};
int main(){DSU d(5);d.unite(0,1);d.unite(1,2);cout<<boolalpha<<(d.find(0)==d.find(2))<<'\n';}
