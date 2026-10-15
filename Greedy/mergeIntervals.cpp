#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    if(intervals.empty()){
        return {};
    }
    vector<vector<int>> result;
    result.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); i++){
        vector<int> &last = result.back();
        if(last[1] >= intervals[i][0]){
            last[1] = max(last[1],intervals[i][1]);
        } else{
            result.push_back(intervals[i]);
        }
    }
    return result;
}
int main(){
    vector<vector<int>> intervals = {{1,4},{4,5}};
    vector<vector<int>> mergedIntervals = mergeIntervals(intervals);
    cout << "Merged Intervals: ";
    for(const auto& interval : mergedIntervals){
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}