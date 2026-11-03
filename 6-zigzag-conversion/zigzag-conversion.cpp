class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows >=s.size()) return s;

        int n= s.size();

        vector<vector<char>> arr(numRows, vector<char>(n, ' '));

        int row = 0 ;
        int col = 0 ;
        int direction = 1;

        for(int i=0 ; i<n ; i++){
            arr[row][col]= s[i];

            if(row==numRows-1){
                direction = -1 ;
            }
            else if(row==0){
                direction = 1;
            }

            if(direction == -1){
                row--;
                col++;
            }
            else if(direction == 1){
                row++;
            }
        }

        string s1 = "";

         n= arr.size();
        int m= arr[0].size();
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(arr[i][j]!= ' '){
                    s1.push_back(arr[i][j]);
                }
            }
        }


        return s1 ;

    }
};