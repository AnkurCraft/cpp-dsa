#include <iostream>
#include <vector>
using namespace std;

void dfs(const vector<int>& a,int target,int start,vector<int>& path,vector<vector<int>>& out){
    if(target==0){out.push_back(path);return;}
    for(int i=start;i<(int)a.size();++i){
        if(a[i]>target)break;
        path.push_back(a[i]);
        dfs(a,target-a[i],i,path,out);
        path.pop_back();
    }
}
int main(){
    vector<int>a{2,3,6,7},path;vector<vector<int>>out;
    dfs(a,7,0,path,out);
    for(auto&v:out){for(int x:v)cout<<x<<' ';cout<<'\n';}
}
