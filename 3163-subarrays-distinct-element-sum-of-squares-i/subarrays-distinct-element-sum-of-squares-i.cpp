class Solution {
public:
    int sumCounts(vector<int>& nums) {
          vector<vector<int>> ans ;
          int n = nums.size();
          int final = 0 ;

          for(int i=0 ; i<n ; i++){
            vector<int> sub ;

            for(int j=i ; j<n ; j++){
                sub.push_back(nums[j]);
                ans.push_back(sub);
            }
          }

          for(int i=0 ; i<ans.size() ; i++){
            unordered_set<int> s ;

            for(int j=0 ; j<ans[i].size() ; j++){
                s.insert(ans[i][j]);
            }

            
            int m= s.size();

            final+= m*m ;
          }

          return final ;
    }
};