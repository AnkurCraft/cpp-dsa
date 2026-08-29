#include <iostream>
#include <vector>
using namespace std;

class SegmentTree{
    int n; vector<long long>tree;
    void build(const vector<int>&a,int p,int l,int r){if(l==r){tree[p]=a[l];return;}int m=(l+r)/2;build(a,p*2,l,m);build(a,p*2+1,m+1,r);tree[p]=tree[p*2]+tree[p*2+1];}
    long long query(int p,int l,int r,int ql,int qr)const{if(qr<l||r<ql)return 0;if(ql<=l&&r<=qr)return tree[p];int m=(l+r)/2;return query(p*2,l,m,ql,qr)+query(p*2+1,m+1,r,ql,qr);}
public:
    explicit SegmentTree(const vector<int>&a):n(a.size()),tree(4*a.size()){if(n)build(a,1,0,n-1);}
    long long rangeSum(int l,int r)const{return n?query(1,0,n-1,l,r):0;}
};
int main(){SegmentTree st({1,3,5,7,9,11});cout<<st.rangeSum(1,4)<<'\n';}
