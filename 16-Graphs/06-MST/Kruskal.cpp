#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct DSU{
    vector<int>p,sz;
    DSU(int n):p(n),sz(n,1){for(int i=0;i<n;++i)p[i]=i;}
    int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
    bool unite(int a,int b){a=find(a);b=find(b);if(a==b)return false;if(sz[a]<sz[b])swap(a,b);p[b]=a;sz[a]+=sz[b];return true;}
};
struct Edge{int u,v,w;};
int kruskal(int n,vector<Edge>e){
    sort(e.begin(),e.end(),[](auto&a,auto&b){return a.w<b.w;});DSU d(n);int cost=0;
    for(auto x:e)if(d.unite(x.u,x.v))cost+=x.w;
    return cost;
}
int main(){cout<<kruskal(4,{{0,1,1},{1,2,2},{2,3,1},{0,3,4},{0,2,3}})<<'\n';}
