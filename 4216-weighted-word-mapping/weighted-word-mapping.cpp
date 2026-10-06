class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
            unordered_map<int , char> mpp ;
            string ans;
            mpp[0]='z'; 
            mpp[1]='y';
            mpp[2]='x';
            mpp[3]='w';
            mpp[4]='v';
            mpp[5]='u';
            mpp[6]='t';
            mpp[7]='s';
            mpp[8]='r'; 
            mpp[9]='q';
            mpp[10]='p';
            mpp[11]='o';
            mpp[12]='n';
            mpp[13]='m';
            mpp[14]='l';
            mpp[15]='k';
            mpp[16]='j'; 
            mpp[17]='i';
            mpp[18]='h';
            mpp[19]='g';
            mpp[20]='f';
            mpp[21]='e';
            mpp[22]='d';
            mpp[23]='c';
            mpp[24]='b'; 
            mpp[25]='a';

        
        for(int i=0 ; i<words.size() ; i++){
            int sum = 0;
            for(int j=0 ; j<words[i].size() ; j++){
                sum+= weights[words[i][j]-'a'];
            }

            ans.push_back(mpp[sum%26]);
        }

        return ans ;
    }
};