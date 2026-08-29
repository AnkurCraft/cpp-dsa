#include <iostream>
#include <vector>
using namespace std;

void siftDown(vector<int>& a,int n,int i){
    while(true){
        int largest=i,l=2*i+1,r=2*i+2;
        if(l<n && a[l]>a[largest])largest=l;
        if(r<n && a[r]>a[largest])largest=r;
        if(largest==i)return;
        swap(a[i],a[largest]);i=largest;
    }
}
void heapSort(vector<int>& a){
    for(int i=a.size()/2-1;i>=0;--i)siftDown(a,a.size(),i);
    for(int end=a.size()-1;end>0;--end){swap(a[0],a[end]);siftDown(a,end,0);}
}
int main(){vector<int>a{4,10,3,5,1};heapSort(a);for(int x:a)cout<<x<<' ';}
