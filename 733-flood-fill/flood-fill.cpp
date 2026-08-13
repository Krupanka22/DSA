class Solution {
public:

    void dfs(int row, int col , int originalcolor , int color , vector<vector<int>>& image){
        int n = image.size();
        int m = image[0].size();

        if(row<0 || row>=n ||  col<0 || col>=m) return ;

        if(originalcolor != image[row][col]) return ;

        image[row][col] = color ;

        dfs(row+1 , col , originalcolor , color , image);
         dfs(row-1  , col , originalcolor , color , image);
          dfs(row , col+1 , originalcolor , color , image);
           dfs(row , col-1 , originalcolor , color , image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalcolor = image[sr][sc];

        if(originalcolor==color) return image ;

        dfs(sr , sc, originalcolor , color , image);

        return image;
    }
};