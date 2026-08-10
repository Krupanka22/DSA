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
    void level(TreeNode* root ,int depth ,vector<vector<int>> &lev ) {
        if(root == NULL) return ;

        if(lev.size() == depth){
            lev.push_back({});
        }

        lev[depth].push_back(root->val);
        level(root->left , depth+1 , lev);
        level(root->right , depth+1 , lev);

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans ;

        level(root , 0 , ans);

        return ans; 
    }
};