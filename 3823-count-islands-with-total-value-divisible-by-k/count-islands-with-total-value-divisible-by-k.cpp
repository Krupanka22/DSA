class Solution {
public:



    void traverse ( vector<vector<int>>& grid , int i , int j ,  vector<int>&island ){
        
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size()) return ;

        if(grid[i][j]==0) return ;

        island.push_back(grid[i][j]);
        grid[i][j]=0;

        traverse(grid ,  i-1 , j , island);
        traverse(grid  , i+1 , j , island);
        traverse(grid  , i , j+1 , island);
        traverse(grid ,  i , j-1 , island);
    }


    int countIslands(vector<vector<int>>& grid, int k) {
        int count = 0 ;
        vector<vector<int>> temp ;
        vector<int> island ;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[i].size() ; j++){
                if(grid[i][j] != 0){
                    island.clear();
                    traverse(grid , i , j , island);
                     
                     long long sum = 0; 
                     for (int val : island) { 
                        sum += val; 
                     } 
                     if (sum % k == 0) { 
                        count++;
                         }
                }
            }
        }

        return count ;
    }
};