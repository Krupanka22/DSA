class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map< char , char> m1;
        unordered_map<char , char> m2;

        for(int i=0 ; i<s.size() ;  i++){
            if(m1.count(s[i])){{
               if(m1[s[i]] != t[i])
                return false;
               
               }}

               else{
                m1[s[i]]=t[i];
               }

            
            if(m2.count(t[i])){
                if(m2[t[i]]!=s[i])
                    return false;               
            }
            else{
                    m2[t[i]]=s[i];
                }}
            return true;
        }
};