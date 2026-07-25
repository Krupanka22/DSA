class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       
       unordered_map<int , int> m1 ;
       vector<int> v1; 

       for(int num : nums){
        m1[num]++;
       }
       for(int i=1 ; i<=nums.size(); i++){
        if(m1[i]==0) v1.push_back(i);

       }
       return v1;
    }
};