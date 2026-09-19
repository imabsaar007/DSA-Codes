#include<bits/stdc++.h>
using namespace std;
int maxSumSubArray(vector<int>& nums, int k){
    int maxSum = INT_MIN;
    int sum = 0;
    int left = 0;
    for(int right = 0; right < nums.size(); right++){
        sum += nums[right];
        if(right-left+1 == k){
            maxSum = max(maxSum,sum);
            sum -= nums[left];
            left++;
        }
    }
    return maxSum;
}
int main(){
    vector<int> arr = {2,4,5,6,78,3};
    cout << maxSumSubArray(arr,3);
    return 0;
}