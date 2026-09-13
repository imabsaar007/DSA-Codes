#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,22,22,45,77,66,44,3,22};
    unordered_map<int,int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    for(auto it = freq.begin(); it != freq.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }
}