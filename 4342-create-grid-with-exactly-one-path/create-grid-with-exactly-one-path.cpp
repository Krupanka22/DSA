class Solution {
public:
    void create(int m, int n, vector<string>& str, int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n)
            return;

        str[i][j] = '.';

        if(i==0 && j<n-1){
            create(m, n, str, i, j + 1);
}
        
        else if(j==n-1 && i<m-1){
            create(m, n, str, i+1, j);

        
    }}

    vector<string> createGrid(int m, int n) {
        vector<string> str(m, string(n, '#'));

        create(m, n, str, 0, 0);

        return str;
    }
};