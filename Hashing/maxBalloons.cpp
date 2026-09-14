#include<bits/stdc++.h>
using namespace std;
int maxBalloons(string text){
    unordered_map<char,int> freq;
    for(char c : text){
        freq[c]++;
    }
    return min({
        freq['b'],
        freq['a'],
        freq['l']/2,
        freq['o']/2,
        freq['n']
    });
}
int main(){
    string text;
    cin >> text;
    cout << maxBalloons(text) << endl;
    return 0;
}