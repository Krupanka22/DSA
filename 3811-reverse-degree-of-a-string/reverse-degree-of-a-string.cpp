class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0 ;
        for(int i=1 ; i<=s.size() ; i++ ){
            int val = 123 - s[i-1];
            int p = i * val;
            ans += p ;
        }

        return ans ;
    }
};