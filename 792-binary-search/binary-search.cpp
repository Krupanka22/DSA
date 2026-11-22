class Solution {
public:
    void binary(vector<int>& nums , int target ,  int l , int r ,int &ans){
        if(l<=r){
            int mid = (l+r)/2;

            if(nums[mid]==target){
                ans= mid ;
                return;
            }
            else if(nums[mid] > target){
                binary(nums , target , l , mid-1 , ans);
            }
            else{
                binary(nums , target , mid+1 , r , ans);
            }
        }
    }
    int search(vector<int>& nums, int target ) {
        int ans = -1 ;
        
        binary(nums , target , 0 , nums.size()-1 , ans);

        return ans ;
    }
};