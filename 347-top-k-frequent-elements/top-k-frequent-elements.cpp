class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp ;
         vector<pair<int,int>> max ;

        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++;
        }

        for(auto num : mpp){
            max.push_back({num.first , num.second});
        }

         sort(max.begin(), max.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

         vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(max[i].first);
        }

        return ans;


    }   
};