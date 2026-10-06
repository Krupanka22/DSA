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
    
    void traverse(TreeNode* root , vector<int>&temp){
        if(root==NULL) return;

        traverse(root->left , temp);
        temp.push_back(root->val);
        traverse(root->right , temp);
    }
    int minDiffInBST(TreeNode* root) {
         vector<int> temp;

         traverse(root, temp);
         int minimum = INT_MAX ;
         for(int i=temp.size()-1 ; i>=1; i--){
                minimum = min(minimum , temp[i]-temp[i-1]);
         }

         return minimum ;
    }
};