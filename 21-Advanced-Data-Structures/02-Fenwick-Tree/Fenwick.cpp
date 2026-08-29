#include <iostream>
#include <vector>
using namespace std;

class Fenwick{
    vector<long long>bit;
public:
    explicit Fenwick(int n):bit(n+1){}
    void add(int i,long long delta){for(++i;i<(int)bit.size();i+=i&-i)bit[i]+=delta;}
    long long sumPrefix(int i)const{long long s=0;for(++i;i>0;i-=i&-i)s+=bit[i];return s;}
    long long rangeSum(int l,int r)const{return l>r?0:sumPrefix(r)-(l?sumPrefix(l-1):0);}
};
int main(){Fenwick f(5);f.add(0,5);f.add(2,3);cout<<f.rangeSum(0,2)<<'\n';}
