class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total = 0 ;
        int cnt = 0 ;
        int n= nums.size();

        for(int n : nums){
            total ^= n ;

            if(n==0){
                cnt=cnt+1;
            }
        }

        if(total != 0)  return n;

        if(cnt==n)  return 0 ;

        return n - 1 ;
        
    }
};