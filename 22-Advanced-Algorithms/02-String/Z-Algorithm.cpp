#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> zFunction(const string&s){
    vector<int>z(s.size());int l=0,r=0;
    for(int i=1;i<(int)s.size();++i){if(i<=r)z[i]=min(r-i+1,z[i-l]);while(i+z[i]<(int)s.size()&&s[z[i]]==s[i+z[i]])++z[i];if(i+z[i]-1>r)l=i,r=i+z[i]-1;}
    return z;
}
int main(){for(int x:zFunction("aabcaabxaaaz"))cout<<x<<' ';}
