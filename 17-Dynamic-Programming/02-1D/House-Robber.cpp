#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(const vector<int>&a){
    int prev2=0,prev1=0;
    for(int x:a){int cur=max(prev1,prev2+x);prev2=prev1;prev1=cur;}
    return prev1;
}
int main(){cout<<rob({2,7,9,3,1})<<'\n';}
