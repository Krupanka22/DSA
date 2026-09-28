class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();

        int count = 0 ;
        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            char ch = s[i];

            if(ch=='('){
                count++;
                ans=max(ans,count);
            }

            else if(ch==')'){
                count--;
            }

            else{
                 continue;
                 }

            

            
        }

        return ans;
    }
};