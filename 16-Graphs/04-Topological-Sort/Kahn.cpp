#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> topoSort(const vector<vector<int>>&g){
    vector<int>indeg(g.size());
    for(auto&adj:g)for(int v:adj)++indeg[v];
    queue<int>q;for(int i=0;i<(int)g.size();++i)if(indeg[i]==0)q.push(i);
    vector<int>order;
    while(!q.empty()){int u=q.front();q.pop();order.push_back(u);for(int v:g[u])if(--indeg[v]==0)q.push(v);}
    if(order.size()!=g.size())return {};
    return order;
}
int main(){auto o=topoSort({{1,2},{3},{3},{}});for(int x:o)cout<<x<<' ';}
