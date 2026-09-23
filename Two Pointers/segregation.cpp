#include<bits/stdc++.h>
using namespace std;
void segregate(vector<int>& nums){
    int left = 0;
    int right = nums.size()-1;
    while( left < right){
        if(nums[left] == 0){
            left++;
        }
        else if(nums[right] == 1){
            right--;
        }
        else{
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}
int main(){
    vector<int> nums = {0,1,0,1,0,1};
    segregate(nums);
    for(int x : nums){
        cout << x <<" ";
    }
    return 0;
}