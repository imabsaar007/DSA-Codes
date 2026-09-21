#include<bits/stdc++.h>
using namespace std;
uint32_t unsetLowest(uint32_t n){
    return n & (n-1);
}
int main(){
    uint32_t n = 40;
    cout << unsetLowest(n);
    return 0;
}