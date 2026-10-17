class Solution {
public:
    int sumCounts(vector<int>& nums) {
          vector<vector<int>> ans ;
          int n = nums.size();
          int final = 0 ;

          for(int i=0 ; i<n ; i++){
            unordered_set <int> s;

            for(int j=i ; j<n ; j++){
                s.insert(nums[j]);

                int m=s.size();
                final+= m*m;
            }
            }

            return final ;
    }
};