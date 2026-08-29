#include <iostream>
using namespace std;
long long modPow(long long a,long long e,long long mod){long long r=1%mod;while(e){if(e&1)r=r*a%mod;a=a*a%mod;e>>=1;}return r;}
int main(){cout<<modPow(2,10,1000)<<'\n';}
