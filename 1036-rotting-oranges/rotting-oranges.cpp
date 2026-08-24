class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int , int>> q ;

        int fresh = 0 ;
        for(int i= 0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[0].size() ; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        if(fresh==0) return 0 ;

        int min = 0 ;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty() && fresh != 0 ){
             int size = q.size();
            for (int i = 0; i < size; i++) {
                auto[r , c] = q.front();
                q.pop();

                for(int d = 0 ; d<4; d++){
                    int nr = dr[d]+r ;
                    int nc = dc[d]+c ;

                    if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                        grid[nr][nc] = 2; 
                        fresh--;
                        
                        q.push({nr, nc});
                    }
                }

        }

        min++;
        
        }

        if (fresh > 0) {
            return -1;
        }

        return min ;
    }
};