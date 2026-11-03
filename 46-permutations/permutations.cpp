class Solution {
public:

    void generate(vector<int>& nums , int n ,vector<int>&temp , vector<vector<int>>&ans , unordered_map<int,int>&mpp){
        if(n==temp.size()) {
            ans.push_back(temp);
            return ;
        }

        for(int i=0 ; i<n ; i++){
            if(mpp[nums[i]]==1){
                continue;
            }
            mpp[nums[i]]=1 ;
            temp.push_back(nums[i]);

            generate(nums , n , temp , ans , mpp);
            
            mpp[nums[i]]=0;
            temp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size() ;
         vector<vector<int>> ans;
         vector<int> temp ;
        unordered_map<int, int> mpp ;

          generate(nums , n , temp , ans , mpp);

          return ans ;
    }
};