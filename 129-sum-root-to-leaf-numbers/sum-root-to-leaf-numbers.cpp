/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root, vector<vector<int>>&temp , vector<int>&nums){
        if(root==NULL) {
            return;
        }

        nums.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL){
            temp.push_back(nums);
            nums.pop_back();
            return ;
        }
       
        traverse(root->left, temp, nums);
        traverse(root->right , temp , nums);

        nums.pop_back();
        
        
    }

    int sumNumbers(TreeNode* root) {
        vector<int> nums;
        vector<vector<int>> temp ;
        vector<int> ans;
        int fin = 0 ;
        traverse(root, temp , nums);

    for(int i=0 ;i<temp.size() ; i++){
        int num =0;
        for(int j=0 ; j<temp[i].size() ; j++){
            int n = temp[i].size()-j;
             num+= pow(10,n-1) * temp[i][j];
        }

        ans.push_back(num);
    }

   
    for(int i=0 ; i< ans.size() ; i++){
        fin+= ans[i];
    }

    
     return fin ;   
    }
};