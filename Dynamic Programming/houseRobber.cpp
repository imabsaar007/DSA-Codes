#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums, int house, vector<vector<int>>& dp,int free){
    if(house == nums.size()){
        return 0;
    }
    if(dp[house][free] != -1){
        return dp[house][free];
    }
    if(free == 0){
        return dp[house][free] = solve(nums, house + 1, dp, 1);
    }
    return dp[house][free] = max(solve(nums, house + 1, dp, 1), solve(nums, house + 1, dp, 0) + nums[house]);
}
int rob(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    return solve(nums, 0, dp, 1);
}
int main(){
    vector<int> nums = {2,7,9,3,8};
    cout << rob(nums) << endl; // Output: 19
    return 0;
}