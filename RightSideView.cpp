
class Solution {
public:
    void solve(TreeNode* root, int level, vector<int>& ans) {

        if(root == NULL) return;

        // First node visited at this level
        if(level == ans.size()) {
            ans.push_back(root->val);
        }

        // Right first
        solve(root->right, level + 1, ans);

        // Then left
        solve(root->left, level + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;

        solve(root, 0, ans);

        return ans;
    }
};
