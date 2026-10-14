#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        int currentSurplus = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); ++i) {
            totalGas += gas[i];
            totalCost += cost[i];
            currentSurplus += gas[i] - cost[i];
            if (currentSurplus < 0) {
                start = i + 1;
                currentSurplus = 0;
            }
        }

        return (totalGas >= totalCost) ? start : -1;
    }
};
int main() {
    Solution solution;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int startIndex = solution.canCompleteCircuit(gas, cost);
    cout << "Starting index: " << startIndex << endl;
    return 0;
}