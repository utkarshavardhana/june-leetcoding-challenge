class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n+1, vector<int> (m+1, 1));
        for(int i=2; i<=n; i++) {
            for(int j=2; j<=m; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[n][m];
    }
};
