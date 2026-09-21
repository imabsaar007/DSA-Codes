#include<bits/stdc++.h>
using namespace std;
uint32_t toggleBit(uint32_t n, int pos){
    return (n ^ (uint32_t{1} << pos));
}
int main(){
    uint32_t n = 44;
    cout << toggleBit(n,2);
    return 0;
}