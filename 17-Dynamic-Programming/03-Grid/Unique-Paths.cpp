#include <iostream>
#include <vector>
using namespace std;

long long uniquePaths(int m,int n){
    vector<long long>dp(n,1);
    for(int r=1;r<m;++r)for(int c=1;c<n;++c)dp[c]+=dp[c-1];
    return dp[n-1];
}
int main(){cout<<uniquePaths(3,7)<<'\n';}
