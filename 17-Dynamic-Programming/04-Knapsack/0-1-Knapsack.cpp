#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(const vector<int>&w,const vector<int>&v,int cap){
    vector<int>dp(cap+1);
    for(int i=0;i<(int)w.size();++i)
        for(int c=cap;c>=w[i];--c)
            dp[c]=max(dp[c],dp[c-w[i]]+v[i]);
    return dp[cap];
}
int main(){cout<<knapsack({2,3,4},{4,5,7},5)<<'\n';}
