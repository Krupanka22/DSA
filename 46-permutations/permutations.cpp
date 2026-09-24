class Solution {
public:

    void Com(vector<int>& nums ,vector<vector<int>>&ans , vector<int>temp , unordered_map<int,int>&mp){

            int n = nums.size();
            int m = temp.size() ;

            if(m==n) {
                ans.push_back(temp);
                return;
            }

           for(int i=0 ; i<n ; i++){
            if(mp[nums[i]]==1) continue ;

            temp.push_back(nums[i]);
            mp[nums[i]]=1;

             Com( nums , ans , temp , mp);

             temp.pop_back();
             mp[nums[i]]=0;
           }

            
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> temp;
        unordered_map<int, int> mp ;

        Com(nums , ans , temp , mp);

        return ans ;

    }
};