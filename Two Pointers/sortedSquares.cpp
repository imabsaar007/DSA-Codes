#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSqaures(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n);
    int left  = 0;
    int right = n -1;
    int index = n -1;
    while(left <  right){
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
        if(leftSquare > rightSquare){
            result[index] = leftSquare;
            left++;
        }
        else{
            result[index] = rightSquare;
            right--;
        }
        index--;
    }
    return result;
}
int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = sortedSqaures(nums);
    for(int x : result){
        cout << x <<" ";
    }
    return 0;
}