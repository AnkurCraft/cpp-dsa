#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(const vector<int>& a){
    unordered_set<int>s(a.begin(),a.end());int ans=0;
    for(int x:s) if(!s.count(x-1)){
        int y=x;
        while(s.count(y))++y;
        ans=max(ans,y-x);
    }
    return ans;
}
int main(){cout<<longestConsecutive({100,4,200,1,3,2})<<'\n';}
