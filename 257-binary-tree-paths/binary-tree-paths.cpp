
class Solution {
public:
    void traverse(TreeNode* root, vector<vector<int>>& ans,
                  vector<int>& path) {

        if (root == NULL) return;

        path.push_back(root->val);

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
        }
        else {
            traverse(root->left, ans, path);
            traverse(root->right, ans, path);
        }

        path.pop_back();
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> path;
        vector<string> temp;

        traverse(root, ans, path);

        for (auto num : ans) {
            string s;

            for (int i = 0; i < num.size(); i++) {
                s += to_string(num[i]);

                if (i != num.size() - 1) {
                    s += "->";
                }
            }

            temp.push_back(s);
        }

        return temp;
    }
};

