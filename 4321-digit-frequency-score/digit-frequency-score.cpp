class Solution {
public:
    int digitFrequencyScore(int n) {
        
        unordered_map <int , int> m1;
        int digit = 0;
        int ans = 0;
        
        while(n!=0){
            digit = n%10 ;
            m1[digit]++;
            n/=10 ;
        }

        for(auto it : m1 ){
            ans += it.first * it.second ;
        }
        return ans;
    }
};