#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> mergeIntervals(vector<pair<int,int>> a){
    if(a.empty())return {};
    sort(a.begin(),a.end());vector<pair<int,int>>out{a[0]};
    for(auto [l,r]:a){if(l<=out.back().second)out.back().second=max(out.back().second,r);else out.push_back({l,r});}
    return out;
}
int main(){for(auto [l,r]:mergeIntervals({{1,3},{2,6},{8,10},{9,12}}))cout<<l<<','<<r<<'\n';}
