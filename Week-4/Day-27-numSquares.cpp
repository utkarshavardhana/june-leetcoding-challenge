class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, -999);
        return find(n, dp);
    }
    int find(int n, vector<int>& dp){
        if(n == 0)	return 0;
        if(n == 1)	return 1;
        if(n == 2)	return 2;
        if(n == 3)	return 3;
        if(dp[n] > 0)	return dp[n];
        int res = INT_MAX;
        for(int i = 1; i <= sqrt(n); i++){
            res = min(res, find(n-i*i, dp) + 1);
        }
        dp[n] = res;
        return res;        
    }
};
