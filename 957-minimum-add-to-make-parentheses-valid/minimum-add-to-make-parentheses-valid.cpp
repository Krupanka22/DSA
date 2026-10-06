class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        int count = 0 ;

        for(int i=0 ; i<s.size() ; i++){
            char ch = s[i];

            if(ch=='('){
                count++;
            }

            if(ch==')'){
                if(count==0){
                    ans++;
                }
                else{
                    count--;
                }
            }
        }

        return ans+count ;
    }
};