class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maximum = INT_MIN ;
        
        for(int i=0 ; i<nums.size() ; i++){
            maximum = max(nums[i] , maximum );
            int minimum = INT_MAX ;
            for(int j=i ; j<nums.size() ; j++){
                minimum = min(minimum,nums[j]);

            }

            if(maximum-minimum <= k) return i;
        }

        return -1;
    }
};