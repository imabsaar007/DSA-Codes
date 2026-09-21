#include<bits/stdc++.h>
using namespace std;
int isolateBit(uint32_t n){
    return (n & uint32_t{0}-n);
}
int main(){
    uint32_t n = 44;
    cout << isolateBit(n);
    return 0;
}