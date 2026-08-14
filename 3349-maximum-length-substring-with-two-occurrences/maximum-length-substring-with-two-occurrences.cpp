class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char , int> m ;
        int i=0 ;
        int len = 0 ;
        for(int j = 0 ; j<s.size() ; j++){
            m[s[j]]++;

            while(m[s[j]]>2){
                m[s[i]]--;
                i++;
            }

            len= max(len , j-i+1);
        }

        return len ;
    }
};