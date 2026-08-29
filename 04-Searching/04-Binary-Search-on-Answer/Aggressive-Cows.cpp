#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(const vector<int>& stalls, int cows, int distance) {
    int placed=1, last=stalls[0];
    for(int i=1;i<(int)stalls.size();++i) {
        if(stalls[i]-last >= distance) {
            ++placed; last=stalls[i];
            if(placed>=cows) return true;
        }
    }
    return false;
}

int maxMinimumDistance(vector<int> stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    int l=0,r=stalls.back()-stalls.front(),ans=0;
    while(l<=r) {
        int m=l+(r-l)/2;
        if(canPlace(stalls,cows,m)) ans=m,l=m+1;
        else r=m-1;
    }
    return ans;
}

int main(){ cout << maxMinimumDistance({1,2,4,8,9},3) << '\n'; }
