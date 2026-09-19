#include<bits/stdc++.h>
using namespace std;
int int maxSumSubarray(vector<int>& nums, int k){
    int maxSum = 0;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = i; j < i+k; j++){
            sum +=arr[j]; 
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}
int main(){
    vector<int> arr = {2,4,5,6,78,3};
    cout << maxSumSubarray(arr,3);
    return 0;
}