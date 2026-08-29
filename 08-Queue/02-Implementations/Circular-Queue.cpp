#include <iostream>
#include <vector>
using namespace std;

class CircularQueue {
    vector<int> q;
    int frontIndex=0, count=0;
public:
    explicit CircularQueue(int capacity):q(capacity){}
    bool empty()const{return count==0;}
    bool full()const{return count==(int)q.size();}
    bool push(int x){
        if(full())return false;
        q[(frontIndex+count)%q.size()]=x;++count;return true;
    }
    bool pop(){
        if(empty())return false;
        frontIndex=(frontIndex+1)%q.size();--count;return true;
    }
    int front()const{return empty()?-1:q[frontIndex];}
};
int main(){CircularQueue q(3);q.push(10);q.push(20);cout<<q.front()<<'\n';q.pop();cout<<q.front()<<'\n';}
