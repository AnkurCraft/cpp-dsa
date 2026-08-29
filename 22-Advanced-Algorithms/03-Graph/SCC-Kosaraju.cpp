#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs1(int u,const vector<vector<int>>&g,vector<int>&vis,vector<int>&order){vis[u]=1;for(int v:g[u])if(!vis[v])dfs1(v,g,vis,order);order.push_back(u);}
void dfs2(int u,const vector<vector<int>>&rg,vector<int>&vis){vis[u]=1;for(int v:rg[u])if(!vis[v])dfs2(v,rg,vis);}
int countSCC(const vector<vector<int>>&g){
    int n=g.size();vector<vector<int>>rg(n);for(int u=0;u<n;++u)for(int v:g[u])rg[v].push_back(u);
    vector<int>vis(n),order;for(int i=0;i<n;++i)if(!vis[i])dfs1(i,g,vis,order);
    fill(vis.begin(),vis.end(),0);reverse(order.begin(),order.end());int c=0;for(int u:order)if(!vis[u]){dfs2(u,rg,vis);++c;}return c;
}
int main(){cout<<countSCC({{1},{2},{0,3},{}})<<'\n';}
