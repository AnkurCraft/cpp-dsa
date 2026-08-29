#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthLargest(const vector<int>&a,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int x:a){pq.push(x);if((int)pq.size()>k)pq.pop();}
    return pq.top();
}
int main(){cout<<kthLargest({3,2,1,5,6,4},2)<<'\n';}
