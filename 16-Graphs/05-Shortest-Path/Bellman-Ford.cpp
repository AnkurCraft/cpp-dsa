#include <iostream>
#include <vector>
#include <limits>
using namespace std;

struct Edge{int u,v,w;};
vector<long long> bellmanFord(int n,const vector<Edge>&e,int src){
    const long long INF=numeric_limits<long long>::max()/4;
    vector<long long>d(n,INF);d[src]=0;
    for(int i=1;i<n;++i){bool changed=false;for(auto [u,v,w]:e)if(d[u]!=INF&&d[v]>d[u]+w){d[v]=d[u]+w;changed=true;}if(!changed)break;}
    for(auto [u,v,w]:e)if(d[u]!=INF&&d[v]>d[u]+w)return {};
    return d;
}
int main(){auto d=bellmanFord(3,{{0,1,4},{0,2,5},{1,2,-2}},0);for(auto x:d)cout<<x<<' ';}
