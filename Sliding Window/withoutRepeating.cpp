#include<bits/stdc++.h>
using namespace std;
int maximumWindow(string& s){
    unordered_map<int,int> mp;
    int maxCount = 0;
    int left = 0;
    for(int right = 0; right < s.size(); right++){
        mp[s[right]]++;
        while(left < right &&  mp[s[right]] > 1){
            mp[s[left]]--;
            left++;
        }
        maxCount = max(maxCount, right - left + 1);
    }
    return maxCount;
}
int main(){
    string s = "bbbbbb";
    cout << maximumWindow(s) << endl;
    return 0;
}