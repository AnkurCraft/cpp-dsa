#include <iostream>
#include <vector>
using namespace std;

int lowerBound(const vector<int>& a, int x) {
    int l=0, r=static_cast<int>(a.size());
    while(l<r) {
        int m=l+(r-l)/2;
        if(a[m] < x) l=m+1;
        else r=m;
    }
    return l;
}

int main(){ cout << lowerBound({1,2,4,4,7},4) << '\n'; }
