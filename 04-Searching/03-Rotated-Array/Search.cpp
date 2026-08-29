#include <iostream>
#include <vector>
using namespace std;

int searchRotated(const vector<int>& a, int target) {
    int l=0,r=static_cast<int>(a.size())-1;
    while(l<=r) {
        int m=l+(r-l)/2;
        if(a[m]==target) return m;
        if(a[l] <= a[m]) {
            if(a[l] <= target && target < a[m]) r=m-1;
            else l=m+1;
        } else {
            if(a[m] < target && target <= a[r]) l=m+1;
            else r=m-1;
        }
    }
    return -1;
}

int main(){ cout << searchRotated({4,5,6,7,0,1,2},0) << '\n'; }
