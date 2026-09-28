#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int xor_all = 0;
        for(int i = 1; i <= nums.size(); i++){
            xor_all ^= i;
        }
        for(int num : nums){
            xor_all ^= num;
        }
        return xor_all;
}
int main(){
    vector<int> arr = {0,1,3};
    cout << missingNumber(arr);
    return 0;
}