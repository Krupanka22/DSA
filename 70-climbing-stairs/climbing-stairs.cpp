class Solution {
public:

    int find(int n , vector<int>&dp){
        if(n==1) return 1;
        if(n==2) return 2;

        if(dp[n] != -1) return dp[n];

        return dp[n]= find(n-2 , dp)+find(n-1 , dp);

    }
    int climbStairs(int n) {
        vector<int> dp(n+1 , -1) ;

        return find(n,dp);
    }
};