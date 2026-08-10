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

    vector<int> postord(TreeNode* root  , vector<int> &v1){
        if(root==NULL) return v1 ;

        postord(root->left , v1);
        postord(root->right, v1);
        v1.push_back(root->val) ;

        return v1 ; 
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v1 ; 

        return postord(root , v1);
    }
};