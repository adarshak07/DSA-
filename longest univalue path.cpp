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
    int dfs(TreeNode* root,int& res) {
        if(root == NULL)
            return 0;

        int leftPath = dfs(root->left,res);
        int rightPath = dfs(root->right,res);

        int left = 0,right = 0;

        if(root->left != NULL && root->val == root->left->val) {
            left = leftPath + 1;
        }

        if(root->right != NULL && root->val == root->right->val) {
            right = rightPath + 1;
        }

        res = max(res,left+right);

        return max(left,right);
    }

    int longestUnivaluePath(TreeNode* root) {
        int res = 0;
        dfs(root,res);
        return res;
    }
};
