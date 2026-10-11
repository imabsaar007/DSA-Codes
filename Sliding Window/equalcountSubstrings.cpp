#include<bits/stdc++.h>
using namespace std;
int equalCountSubstrings(string& s,int k){
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        unordered_map<char,int> mp;
        for(int j = i; j < s.size(); j++){
            mp[s[j]]++;
            bool valid = true;
            for(auto &it : mp){
                if(it.second  != k){
                    valid = false;
                    break;
                }
            }
            if(valid){
                // Process the valid substring
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    string s = "aababc";
    int k = 2;
    cout << equalCountSubstrings(s,k) << endl;
    return 0;
}