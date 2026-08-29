#include <iostream>
#include <vector>
using namespace std;

int partitionArray(vector<int>& a,int l,int r) {
    int pivot=a[r], i=l;
    for(int j=l;j<r;++j) if(a[j] <= pivot) swap(a[i++],a[j]);
    swap(a[i],a[r]); return i;
}
void quickSort(vector<int>& a,int l,int r) {
    if(l>=r)return;
    int p=partitionArray(a,l,r);
    quickSort(a,l,p-1); quickSort(a,p+1,r);
}
int main(){vector<int>a{9,4,7,3,10,5};quickSort(a,0,a.size()-1);for(int x:a)cout<<x<<' ';}
