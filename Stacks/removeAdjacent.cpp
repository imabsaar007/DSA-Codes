#include<bits/stdc++.h>
using namespace std;
string removeAdjacent(string& s){
    stack<char> st;
    int i = 0;
    while(i < s.size()){
        if(!st.empty() && st.top() == s[i]){
            st.pop();
        } else {
            st.push(s[i]);
        }
        i++;
    }
    string result = "";
    while(!st.empty()){
        result = st.top() + result;
        st.pop();
    }
    return result;
}
int main(){
    string s = "bbbcd";
    cout << removeAdjacent(s) << endl;
    return 0;
}