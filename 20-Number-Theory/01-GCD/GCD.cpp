#include <iostream>
using namespace std;
long long gcd(long long a,long long b){while(b){long long t=a%b;a=b;b=t;}return a<0?-a:a;}
long long lcm(long long a,long long b){return a/gcd(a,b)*b;}
int main(){cout<<gcd(84,30)<<' '<<lcm(12,18)<<'\n';}
