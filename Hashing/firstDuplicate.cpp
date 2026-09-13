#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,33,4,55,1,45,35};
    unordered_map<int,int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
        if(freq[arr[i]] > 1){
            cout << arr[i] << endl; // Print the first duplicate element
            break;
        }
    }
}