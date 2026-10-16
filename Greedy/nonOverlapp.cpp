#include<bits/stdc++.h>
using namespace std;
int nonOverlapping(vector<vector<int>>& intervals){
    sort(intervals.begin(),intervals.end(),
    [](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });
    int removed = 0;
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i][0] < intervals[i-1][1]){
            removed++;
        } else{
            intervals[i-1] = intervals[i];
        }
    }
    return removed;
}
int main(){
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
    int result = nonOverlapping(intervals);
    cout << "Minimum number of intervals to remove: " << result << endl;
    return 0;
}