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
    void dfs(TreeNode* root, int targetSum , vector<vector<int>>&ans , int sum ,vector<int>&path ){
        if(root==NULL) return;

        path.push_back(root->val);
        sum+=root->val ;
        
        if(root->left==NULL && root->right==NULL){
            if(sum == targetSum){
                ans.push_back(path);
            }
        }

        dfs(root->left, targetSum , ans , sum , path);
        dfs(root->right, targetSum , ans ,sum , path);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans ;
       vector<int> path ;


         dfs(root, targetSum , ans ,0 , path);

    return ans ;
    }
};