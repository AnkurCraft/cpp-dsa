#include <iostream>
#include <vector>
using namespace std;
int main(){vector<int>a{1,2,3};for(int mask=0;mask<(1<<a.size());++mask){for(int i=0;i<(int)a.size();++i)if(mask&(1<<i))cout<<a[i]<<' ';cout<<'\n';}}
