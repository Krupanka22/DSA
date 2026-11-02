
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int minimum = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            minimum = min(minimum, nums[i]);
        }

        return sum - (minimum * nums.size());
    }
};

