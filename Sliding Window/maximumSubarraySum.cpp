#include<bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int> arr, int k){
    int left = 0;
    int sum = 0;
    int maxSum = 0;
    unordered_set<int> st;
    for(int right = 0; right < arr.size(); right++){
        while(st.count(arr[right])){
            st.erase(arr[left]);
            sum -= arr[left];
            left++;
        }
        st.insert(arr[right]);
        sum += arr[right];
        if(right - left + 1 == k){
            maxSum = max(maxSum, sum);
            st.erase(arr[left]);
            sum -= arr[left];
            left++;
        }
    }
    return maxSum;
}
int main(){
    vector<int> arr = {1,5,4,2,9,9,9};
    int k = 3;
    cout << maximumSubarraySum(arr, k) << endl;
}