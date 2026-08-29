#include <iostream>
using namespace std;
int countSetBits(unsigned x){int c=0;while(x){x&=(x-1);++c;}return c;}
int main(){cout<<countSetBits(29)<<'\n';}
