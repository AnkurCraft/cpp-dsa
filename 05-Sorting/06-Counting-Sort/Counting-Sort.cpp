#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> countingSort(const vector<int>& a) {
    if(a.empty()) return {};
    auto [mn,mx]=minmax_element(a.begin(),a.end());
    vector<int> count(*mx-*mn+1);
    for(int x:a)++count[x-*mn];
    vector<int> out;
    for(int i=0;i<(int)count.size();++i)
        while(count[i]--)out.push_back(i+*mn);
    return out;
}
int main(){auto a=countingSort({4,2,2,8,3,3,1});for(int x:a)cout<<x<<' ';}
