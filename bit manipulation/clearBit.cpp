#include<bits/stdc++.h>
using namespace std;
int clearBit(uint32_t n, int pos){
    return n & ~(uint32_t{1} << pos); 
}
int main(){
    uint32_t n = 44;
    uint32_t m = clearBit(n,2);
    cout << m;
}