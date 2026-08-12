class Solution {
public:


    void DFS(int node , vector<vector<int>>& isConnected , vector<int>&vis){
        vis[node]=1;
        int n = isConnected.size() ;

        for(int i=0 ; i<n ; i++){
            if(isConnected[node][i]==1 && !vis[i]){
                DFS(i , isConnected , vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size() ;
        vector<int> vis(n , 0);
        int provinces=0 ;

        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
                provinces++;
                DFS(i , isConnected , vis);
            }
           
        }

        return provinces ;
    }
};