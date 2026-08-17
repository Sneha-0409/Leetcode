class Solution {
public:
    vector<vector<int>> dp;
    vector<int> prefix;
    int solve(int l, int r) {
        if (l == r) return 0;
        if (dp[l][r] != -1) return dp[l][r];
        int ans = 0;
        for (int m = l; m < r; m++) {
            int leftSum = prefix[m + 1] - prefix[l];
            int rightSum = prefix[r + 1] - prefix[m + 1];
            if (leftSum < rightSum)
                ans = max(ans, leftSum + solve(l, m));
            else if (leftSum > rightSum)
                ans = max(ans, rightSum + solve(m + 1, r));
            else
                ans = max(ans,
                          leftSum + max(solve(l, m), solve(m + 1, r)));
        }
        return dp[l][r] = ans;
    }
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        prefix.assign(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + stoneValue[i];
        dp.assign(n, vector<int>(n, -1));
        return solve(0, n - 1);
    }
};