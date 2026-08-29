#include <iostream>
#include <vector>
using namespace std;
int singleNumber(const vector<int>&a){int x=0;for(int v:a)x^=v;return x;}
int main(){cout<<singleNumber({4,1,2,1,2})<<'\n';}
