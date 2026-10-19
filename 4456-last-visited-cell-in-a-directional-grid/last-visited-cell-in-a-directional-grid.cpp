class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int row = 0;
        int col = 0;

        while (true) {

            char ch = grid[row][col];

            grid[row][col] = '0';

            int nr = row;
            int nc = col;

            if (ch == 'R')
                nc++;
            else if (ch == 'D')
                nr++;
            else if (ch == 'U')
                nr--;
            else if (ch == 'L')
                nc--;

            if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
                break;
            }

            if (grid[nr][nc]=='0') {
                break;
            }

            row = nr;
            col = nc;
        }

        return {row, col};
    }
};