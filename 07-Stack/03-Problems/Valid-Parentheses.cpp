#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool valid(const string& s){
    stack<char> st;
    for(char c:s){
        if(c=='('||c=='['||c=='{') st.push(c);
        else {
            if(st.empty())return false;
            char o=st.top();st.pop();
            if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{'))return false;
        }
    }
    return st.empty();
}
int main(){cout<<boolalpha<<valid("({[]})")<<'\n';}
