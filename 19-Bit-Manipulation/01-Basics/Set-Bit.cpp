#include <iostream>
using namespace std;
bool isSet(unsigned x,int bit){return (x>>bit)&1U;}
unsigned setBit(unsigned x,int bit){return x|(1U<<bit);}
unsigned clearBit(unsigned x,int bit){return x&~(1U<<bit);}
unsigned toggleBit(unsigned x,int bit){return x^(1U<<bit);}
int main(){unsigned x=10;cout<<isSet(x,1)<<' '<<setBit(x,0)<<' '<<clearBit(x,1)<<'\n';}
