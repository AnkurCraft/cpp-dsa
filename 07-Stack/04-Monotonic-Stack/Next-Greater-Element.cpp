#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(const vector<int>& a){
    vector<int> ans(a.size(),-1); stack<int> st;
    for(int i=0;i<(int)a.size();++i){
        while(!st.empty() && a[st.top()]<a[i]){
            ans[st.top()]=a[i];st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main(){for(int x:nextGreater({2,1,2,4,3}))cout<<x<<' ';}
