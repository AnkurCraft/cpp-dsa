#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool safe(const vector<string>& b,int r,int c){
    int n=b.size();
    for(int i=0;i<r;++i)if(b[i][c]=='Q')return false;
    for(int i=r-1,j=c-1;i>=0&&j>=0;--i,--j)if(b[i][j]=='Q')return false;
    for(int i=r-1,j=c+1;i>=0&&j<n;--i,++j)if(b[i][j]=='Q')return false;
    return true;
}
void solve(int r,vector<string>&b,vector<vector<string>>&ans){
    if(r==(int)b.size()){ans.push_back(b);return;}
    for(int c=0;c<(int)b.size();++c)if(safe(b,r,c)){
        b[r][c]='Q';solve(r+1,b,ans);b[r][c]='.';
    }
}
int main(){int n=4;vector<string>b(n,string(n,'.'));vector<vector<string>>ans;solve(0,b,ans);cout<<ans.size()<<'\n';}
