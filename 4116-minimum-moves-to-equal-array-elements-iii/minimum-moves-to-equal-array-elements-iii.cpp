class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maximum = INT_MIN ;
        for(int i=0 ; i<nums.size() ; i++){
            maximum = max(maximum , nums[i]);
        }

        int count = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            count+= maximum-nums[i];
        }

        return count ;
    }
};