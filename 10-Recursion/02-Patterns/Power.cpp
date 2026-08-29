#include <iostream>
using namespace std;

long long power(long long a,long long n){
    if(n==0)return 1;
    long long half=power(a,n/2);
    return n%2?half*half*a:half*half;
}
int main(){cout<<power(2,10)<<'\n';}
