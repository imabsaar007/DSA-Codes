#include<bits/stdc++.h>
using namespace std;
vector<int> prevGreater(vector<int>& arr){
    vector<int> result(arr.size());
    for(int i = 0; i < arr.size(); i++){
        int pge = -1;
        for(int j = i-1; j >= 0; j--){
            if(arr[j] > arr[i]){
                pge = arr[j];
                break;
            }
        }
        result[i] = pge;
    }
    return result;
}
int main(){
    vector<int> arr = {4,1,2,5,3};
    vector<int> result = prevGreater(arr);
    for(int &val : result){
        cout << val << " ";
    }
    return 0;
}