class Solution {
public:
 int Bsearch(vector<int>& nums, int target , int low , int high) {

        if(low<=high){
            int mid = (low+high)/2 ;

            if(target==nums[mid]) return mid ;

            else if(target < nums[mid]) {
                return Bsearch(nums , target , low , mid-1);
            }
            else{
                return Bsearch(nums , target , mid+1 , high);
            }
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        return Bsearch(nums , target , 0 ,nums.size()-1);
    }
};