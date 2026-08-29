#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxActivities(vector<pair<int,int>> activities){
    sort(activities.begin(),activities.end(),[](auto&a,auto&b){return a.second<b.second;});
    int count=0,lastEnd=-1;
    for(auto [start,end]:activities)if(start>=lastEnd){++count;lastEnd=end;}
    return count;
}
int main(){cout<<maxActivities({{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}})<<'\n';}
