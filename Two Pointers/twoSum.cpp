#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    int left = 0;
    int high = nums.size()-1;
    while( left < high){
        if(nums[left] + nums[high] == target){
            return {left+1, high+1};
        }
        else if(nums[left] + nums[high] < target){
            left++;
        }
        else{
            high--;
        }
    }
    return {};
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for(int x : result){
        cout << x <<" ";
    }
    return 0;
}