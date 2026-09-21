#include<bits/stdc++.h>
using namespace std;
int totalSetBits(int n){
    int count = 0;
    while(n!= 0){
        n &= (n-1);
        count++;
    }
    return count;
}
int main(){
    int n = 13;
    cout << totalSetBits(n);
    return 0;
}