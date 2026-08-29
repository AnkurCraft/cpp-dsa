#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

long long largestRectangle(const vector<int>& h){
    stack<int> st; long long ans=0;
    for(int i=0;i<=static_cast<int>(h.size());++i){
        int cur=(i==(int)h.size()?0:h[i]);
        while(!st.empty() && h[st.top()]>=cur){
            int height=h[st.top()];st.pop();
            int left=st.empty()?0:st.top()+1;
            ans=max(ans,1LL*height*(i-left));
        }
        st.push(i);
    }
    return ans;
}
int main(){cout<<largestRectangle({2,1,5,6,2,3})<<'\n';}
