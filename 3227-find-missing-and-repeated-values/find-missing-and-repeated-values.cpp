class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a = 0 ;
        int b = 0 ;
        int count = 0 ;

        int n = grid.size();

        vector<int> ans ;

    for(int k=1 ; k<= n*n ; k++){
        count = 0;
        for(int i=0 ; i<n ; i++){
            for(int j= 0 ; j < n ; j++){
                if(k == grid[i][j]){
                    count++;
                }
                
            }

        }
        if(count==0){
                   a = k; 
                }
        if(count > 1){
            b=k ;
        }
    }
    ans.push_back(b);
    ans.push_back(a);
    

    return ans;
    }
};