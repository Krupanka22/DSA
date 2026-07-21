class Solution {
public:
    bool isPowerOfTwo(int n) {
     
     if(n==1){
        return true;
     }
     
     long long int i = 1 ;
     while (1){
        i= 2 * i;
        if(i==n){
            return true;
        }
        if(i>n){
                return false ;
 
        }
     }
     
     }
};