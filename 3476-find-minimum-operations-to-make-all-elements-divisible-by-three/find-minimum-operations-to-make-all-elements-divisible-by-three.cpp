class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = 0 ;
        int digit = 0;
        int count = 0 ;

        for(int i=0 ; i<nums.size() ; i++){
            n=nums[i];
            digit = 0;


            while(n>0){
               digit = digit + n%10 ;
               n/=10; 
            }

            if(digit%3 == 1 || digit% 3 ==2 ){
                count +=1 ; 
            }
        }

        return count ;
    }
};