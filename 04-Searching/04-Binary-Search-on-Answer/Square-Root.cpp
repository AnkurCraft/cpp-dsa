#include <iostream>
using namespace std;

long long integerSqrt(long long n) {
    long long l=0,r=n,ans=0;
    while(l<=r) {
        long long m=l+(r-l)/2;
        if(m <= n/m || m==0) { ans=m; l=m+1; }
        else r=m-1;
    }
    return ans;
}

int main(){ cout << integerSqrt(40) << '\n'; }
