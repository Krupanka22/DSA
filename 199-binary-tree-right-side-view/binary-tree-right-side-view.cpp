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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> temp ;
        vector<int> ans ;
        if(root==NULL) return ans;
        queue<TreeNode*> q ;
        q.push(root);

        while(!q.empty()){
            int n=q.size();

            vector<int> level ;

        for(int i=0 ; i<n ; i++){
                TreeNode* Node= q.front();
                q.pop();

                if(Node->left != NULL){
                    q.push(Node->left);
                }
                if(Node->right!=NULL){
                    q.push(Node->right);
                }
                level.push_back(Node->val);

            }
        temp.push_back(level);
    }
    
    for(auto num : temp){
        int n= num.size()-1;

        ans.push_back(num[n]);
    }

        return ans ;
    
    }
};