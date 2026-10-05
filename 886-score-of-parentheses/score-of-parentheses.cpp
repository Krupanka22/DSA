class Solution {
public:
    int solve(int &i , string s , int count){

    while(i<s.size()){
        if(i<s.size()-1 && (s[i]=='(' && s[i+1]==')')){
            count=count + 1 ;
            i=i+2;
                   }

        else if(s[i]=='('){
             i++;
            count += 2*solve(i , s ,0);
           
        }
        else if(s[i]==')'){
            i++;
            return count ;
        }
    }
        return count  ;
    }
    int scoreOfParentheses(string s) {
        int i=0 ;
        return solve( i , s , 0);
    }
};