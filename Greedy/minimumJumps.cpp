#include<bits/stdc++.h>
using namespace std;
int minJumps(vector<int>& nums){
    int n = nums.size();
    if(n <= 1) return 0;
    if(nums[0] == 0) return -1;
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;
    for(int i = 0; i < n - 1; i++){
        farthest = max(farthest, i + nums[i]);
        if(i == currentEnd){
            jumps++;
            currentEnd = farthest;
        }
    }
    return jumps;
}
int main(){
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << minJumps(nums) << endl;
    return 0;
}