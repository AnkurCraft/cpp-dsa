#include <iostream>
#include <vector>
using namespace std;
vector<bool> sieve(int n){vector<bool>p(n+1,true);if(n>=0)p[0]=false;if(n>=1)p[1]=false;for(int i=2;i*1LL*i<=n;++i)if(p[i])for(long long j=1LL*i*i;j<=n;j+=i)p[j]=false;return p;}
int main(){auto p=sieve(30);for(int i=2;i<=30;++i)if(p[i])cout<<i<<' ';}
