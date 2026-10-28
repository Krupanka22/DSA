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
    void traverse(TreeNode* root, int targetSum , bool& ans , int sum){

        if(root==NULL){
            return ;
        }
        sum+=root->val ;

        if(sum==targetSum && root->left==NULL && root->right==NULL){
            ans=1;
            return ;
        }
        if(ans==true) return ;
        traverse(root->left, targetSum , ans , sum);
        traverse(root->right , targetSum , ans ,sum);

        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = 0 ;

        traverse(root , targetSum , ans , 0);

        return ans ;
    }
};