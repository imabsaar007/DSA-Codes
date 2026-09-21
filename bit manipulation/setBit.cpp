#include<bits/stdc++.h>
using namespace std;
uint32_t setBit(uint32_t n, int pos){
    return (n | (uint32_t{1} << pos));
}
int main(){
    uint32_t n = 32;
    cout << setBit(n,2);
    return 0;
}
