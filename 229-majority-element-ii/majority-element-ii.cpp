class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1 ; 
        vector<int> v;

        for(int it : nums){
            m1[it]++;
        }

        for (auto it : m1){
            if(it.second>nums.size()/3){
                    v.push_back(it.first);
            }
        }

        return v;
    }
};