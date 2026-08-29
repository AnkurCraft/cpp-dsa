#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

vector<long long>dijkstra(const vector<vector<pair<int,int>>>&g,int src){
    const long long INF=numeric_limits<long long>::max()/4;
    vector<long long>d(g.size(),INF);priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
    d[src]=0;pq.push({0,src});
    while(!pq.empty()){auto [du,u]=pq.top();pq.pop();if(du!=d[u])continue;for(auto [v,w]:g[u])if(d[v]>du+w){d[v]=du+w;pq.push({d[v],v});}}
    return d;
}
int main(){vector<vector<pair<int,int>>>g{{{1,4},{2,1}},{{3,1}},{{1,2},{3,5}},{{}}};for(auto d:dijkstra(g,0))cout<<d<<' ';}
