class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st ;
        unordered_map<int,int> m ;

        for(int num : nums2){

        while(!st.empty() && st.top() < num){
            m[st.top()]=num ;
            st.pop();
        }

        st.push(num);}

        while(!st.empty()){
            m[st.top()]=-1;
            st.pop();
        }
        

        vector<int> ans;

         for(int num:nums1){
            ans.push_back(m[num]);
        }



        return ans;
        
    }
};