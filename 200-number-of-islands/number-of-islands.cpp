class Solution {
public:

    void dfs(int row , int col , vector<vector<char>>& grid , int n ,int m){
       
       if((row<0 || row>=n  || col<0 || col>=m|| grid[row][col] == '0')){
            return ;
       }
        grid[row][col]='0';

        dfs(row+1 , col , grid , n , m);
        dfs(row-1 , col , grid, n, m );
        dfs(row , col+1 , grid, n, m );
        dfs(row, col-1 , grid, n, m );
        

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m= grid[0].size() ;
        int count = 0 ;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j]=='1'){
                    dfs(i , j ,grid , n ,m);
                    count++;
                }
            }
        }

        return count ;
    }
};