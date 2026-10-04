#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n, vector<vector<int>>& dp) {
    // Base case: if no items left or capacity is 0
    if (n == 0 || W == 0) {
        return 0;
    }

    // Return memoized result if already computed
    if (dp[n][W] != -1) {
        return dp[n][W];
    }

    // If the weight of the current item is more than capacity W, skip it
    if (wt[n - 1] > W) {
        return dp[n][W] = knapSack(W, wt, val, n - 1, dp);
    } else {
        // Return the maximum of either including or excluding the current item
        return dp[n][W] = max(
            knapSack(W, wt, val, n - 1, dp),
            val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1, dp)
        );
    }
}

int main() {
    int value[] = {1, 2, 3};
    int weight[] = {4, 5, 6};
    int w = 3;
    int n = sizeof(value) / sizeof(value[0]);

    // Initialize DP table of size (n + 1) x (w + 1) with -1
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

    cout << knapSack(w, weight, value, n, dp) << endl;

    return 0;
}
