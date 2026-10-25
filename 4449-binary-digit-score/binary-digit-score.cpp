class Solution {
public:

    int converter(int n ) {
       if(n==0) return 0 ;

       string s = "";

       while(n>0){
        s += (n%2)+'0';
        n/=2 ;
       }
        int count =0 ;
       for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='1'){
            count++;
        }
       }

       return count;
    }
    int calculateScore(int a, int b) {
        int s1 = converter(a);
        int s2 = converter(b);

        if(s1>=s2) return s1*s2;
        return s2/s1 ;
    }
};