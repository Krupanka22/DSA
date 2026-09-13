class Solution {
public:
    int minAddToMakeValid(string s) {
        int ct = 0 ;
        int count = 0 ;

        for(int i=0;i<s.size();i++){
            if(s[i]==')' && count==0){
                ct++;
            }
            if(s[i]=='('){
                count++;
            }
            else if(count>0) count--;
        }

        return count+ct ;
    }
};