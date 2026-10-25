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
    void traverse(TreeNode* root , vector<int>&ans){
        if(root==NULL){
            return ;
        }

        traverse(root->left , ans);
        ans.push_back(root->val);
        traverse(root->right , ans);

    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans ;
        int minimum = INT_MAX ;
        traverse(root , ans);
        for(int i=0 ; i<ans.size()-1 ; i++){
            minimum=min(minimum , abs(ans[i]-ans[i+1]));
        }

        return minimum ;
    }
};