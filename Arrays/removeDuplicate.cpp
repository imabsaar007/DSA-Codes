#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1] = nums[j];
                i++;
            }
            
        }
        return i+1;
    }
int main(){
    vector<int> arr = {1,1,2,2,3};
    int count = removeDuplicates(arr);
    cout << count << endl;
    for(int x : arr){
        cout << x <<" ";
    }
}