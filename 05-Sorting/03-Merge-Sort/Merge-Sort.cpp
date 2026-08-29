#include <iostream>
#include <vector>
using namespace std;

void mergeRange(vector<int>& a,int l,int m,int r) {
    vector<int> temp;
    int i=l,j=m+1;
    while(i<=m && j<=r) temp.push_back(a[i] <= a[j] ? a[i++] : a[j++]);
    while(i<=m) temp.push_back(a[i++]);
    while(j<=r) temp.push_back(a[j++]);
    for(int k=0;k<(int)temp.size();++k) a[l+k]=temp[k];
}
void mergeSort(vector<int>& a,int l,int r) {
    if(l>=r) return;
    int m=l+(r-l)/2;
    mergeSort(a,l,m); mergeSort(a,m+1,r); mergeRange(a,l,m,r);
}
int main(){ vector<int>a{5,2,4,1,3}; mergeSort(a,0,a.size()-1); for(int x:a)cout<<x<<' '; }
