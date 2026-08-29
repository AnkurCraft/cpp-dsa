#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int lcs(const string&a,const string&b){
    vector<int>prev(b.size()+1),cur(b.size()+1);
    for(char x:a){fill(cur.begin(),cur.end(),0);for(int j=1;j<=(int)b.size();++j)cur[j]=(x==b[j-1]?prev[j-1]+1:max(prev[j],cur[j-1]));swap(prev,cur);}
    return prev.back();
}
int main(){cout<<lcs("abcde","ace")<<'\n';}
