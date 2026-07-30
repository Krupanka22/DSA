class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int , int> m1;
       
        for(int it : nums){
            m1[it]++;
        }

        for(auto it : m1){
            if(it.second>nums.size()/2 ){
               return it.first; 
            }
        }
        return 0;

    }
};