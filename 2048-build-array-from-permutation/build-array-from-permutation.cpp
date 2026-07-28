class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> num(nums.size());

        for(int i=0 ; i <= nums.size()-1 ; i++){
            num[i]=nums[nums[i]];
        }
        return num;
    }
};