class Solution {
public:



    void traverse ( vector<vector<int>>& grid , int i , int j , long long &sum){
        
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()) return ;

        if(grid[i][j]==0) return ;

        
        sum+=   grid[i][j] ;
        grid[i][j]=0;

        traverse(grid ,  i-1 , j , sum);
        traverse(grid  , i+1 , j , sum);
        traverse(grid  , i , j+1 , sum);
        traverse(grid ,  i , j-1 , sum);
    }


    int countIslands(vector<vector<int>>& grid, int k) {
        int count = 0 ;
        long long sum = 0 ;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[i].size() ; j++){
                if(grid[i][j] != 0){
                   sum = 0 ;
                   traverse(grid , i , j , sum);
                     
                     if (sum % k == 0) { 
                        count++;
                         }
                }
            }
        }

        return count ;
    }
};