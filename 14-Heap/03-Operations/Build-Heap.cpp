#include <iostream>
#include <vector>
using namespace std;

void siftDown(vector<int>&a,int n,int i){
    while(true){int best=i,l=2*i+1,r=2*i+2;if(l<n&&a[l]>a[best])best=l;if(r<n&&a[r]>a[best])best=r;if(best==i)break;swap(a[i],a[best]);i=best;}
}
void buildMaxHeap(vector<int>&a){for(int i=(int)a.size()/2-1;i>=0;--i)siftDown(a,a.size(),i);}
int main(){vector<int>a{3,1,6,5,2,4};buildMaxHeap(a);for(int x:a)cout<<x<<' ';}
