#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> prefixFunction(const string&p){
    vector<int>pi(p.size());
    for(int i=1;i<(int)p.size();++i){int j=pi[i-1];while(j>0&&p[i]!=p[j])j=pi[j-1];if(p[i]==p[j])++j;pi[i]=j;}
    return pi;
}
vector<int> kmpSearch(const string&s,const string&p){
    if(p.empty())return {};
    auto pi=prefixFunction(p);vector<int>ans;
    for(int i=0,j=0;i<(int)s.size();++i){while(j>0&&s[i]!=p[j])j=pi[j-1];if(s[i]==p[j])++j;if(j==(int)p.size()){ans.push_back(i-j+1);j=pi[j-1];}}
    return ans;
}
int main(){for(int x:kmpSearch("ababcabcabababd","ababd"))cout<<x<<' ';}
