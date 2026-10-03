#include<bits/stdc++.h>
using namespace std;
int solve(int i, int n, vector<int>& memo) {
    if (i == n) {
        return 1; // 1 valid way to reach the top
    }
    if (i > n) {
        return 0; // 0 ways if we overshoot
    }
    if (memo[i] != -1) {
        return memo[i];
    }
    return memo[i] = solve(i + 1, n, memo) + solve(i + 2, n, memo);
}
int rob(int n) {
    vector<int> memo(n + 1, -1);
    return solve(0, n, memo);
}