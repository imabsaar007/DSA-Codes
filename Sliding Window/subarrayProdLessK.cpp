#include<bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int left = 0;
        long long product = 1;
        int count = 0;
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while (product >= k) {
                product /= nums[left];
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
int main(){
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    int result = numSubarrayProductLessThanK(nums, k);
    cout << result << endl;
    return 0;
}
