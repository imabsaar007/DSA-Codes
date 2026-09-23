#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tripletSum(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for(int i = 0; i < n-2; i++){
        int left = i+1;
        int right = n-1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return result;
}
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = tripletSum(nums);
    for(const auto& triplet : result){
        for(int x : triplet){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}