#include<bits/stdc++.h>
using namespace std;
bool getBit(uint32_t n, int pos){
    return(n & (uint32_t{1} << pos)) != 0;
}
int main(){
    uint32_t n = 5;
    cout << getBit(n,1);
}