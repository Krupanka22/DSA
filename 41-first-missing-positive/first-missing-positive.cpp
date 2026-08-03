class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());

    int ans = 1;
    while (st.count(ans))
    ans++;

    return ans;

    }
};