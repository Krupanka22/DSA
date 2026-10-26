class Solution {
public:



    long long traverse ( vector<vector<int>>& grid , int i , int j){
        long long sum = 0;
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()) return 0;

        if(grid[i][j]==0) return 0;

        
        sum = grid[i][j] ;
        grid[i][j]=0;

        sum += traverse(grid ,  i-1 , j );
        sum += traverse(grid  , i+1 , j );
        sum += traverse(grid  , i , j+1 );
        sum += traverse(grid ,  i , j-1 );

        return sum;
    }


    int countIslands(vector<vector<int>>& grid, int k) {
        int count = 0 ;
       
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[i].size() ; j++){
                if(grid[i][j] != 0){
                    long long sum = traverse(grid , i , j);
                     
                     if (sum % k == 0) { 
                        count++;
                         }
                }
            }
        }

        return count ;
    }
};