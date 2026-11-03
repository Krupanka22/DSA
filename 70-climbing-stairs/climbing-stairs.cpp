class Solution {
public:

    int find(int n , vector<int>&dp){
        if(n==1) return 1;
        if(n==2) return 2;

        if(dp[n] != -1) return dp[n];
        int left,right;
        if(dp[n-2]!=-1){
            left=dp[n-2];
        }
        else left=find(n-2 , dp);
        if(dp[n-1]!=-1){
            right=dp[n-1];
        } else right=find(n-1 , dp);

        return dp[n]= left+right;

    }
    int climbStairs(int n) {
        vector<int> dp(n+1 , -1) ;

        return find(n,dp);
    }
};