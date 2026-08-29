#include <iostream>
#include <vector>
using namespace std;

bool dfs(int u,int parent,const vector<vector<int>>&g,vector<int>&vis){
    vis[u]=1;
    for(int v:g[u]){
        if(!vis[v]){if(dfs(v,u,g,vis))return true;}
        else if(v!=parent)return true;
    }
    return false;
}
bool hasCycle(const vector<vector<int>>&g){
    vector<int>vis(g.size());
    for(int i=0;i<(int)g.size();++i)if(!vis[i]&&dfs(i,-1,g,vis))return true;
    return false;
}
int main(){vector<vector<int>>g{{1,2},{0,2},{0,1}};cout<<boolalpha<<hasCycle(g)<<'\n';}
