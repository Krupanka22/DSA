class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    vector <int> v1;
       unordered_map<int , int> m1;
       for(int i=0 ; i<nums2.size(); i++){
        m1[nums2[i]]=i;
       } 

       

       for(int i=0 ; i<nums1.size() ; i++){
         
            int target = m1[nums1[i]];
            int found = -1 ;
            
         
         for(int j = target+1 ;j<nums2.size() ; j++){
         
         if(nums1[i] < nums2[j] ){
            found = nums2[j];
            break;
         }

        }
        v1.push_back(found);
         
       }
       return v1;
    }
};