#include<bits/stdc++.h>
using namespace std;
int assignCookies(vector<int>& g, vector<int>& s){
    int childIndex = 0;
    int cookieIndex = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while(childIndex < g.size() && cookieIndex < s.size()){
        if(g[childIndex] <= s[cookieIndex]){
            childIndex++;
        }
        cookieIndex++;
    }   
    return childIndex;
}
int main(){
    vector<int> g = {1,2,3};
    vector<int> s = {1,2};
    cout << assignCookies(g, s) << endl;
    return 0;
}