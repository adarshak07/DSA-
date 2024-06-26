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
    vector<vector<int>> path;
    void hasPathSum(TreeNode* root, int targetSum, vector<int> vec) {
        if(!root) return;
        if(!root->right && !root->left) 
        {
            if(targetSum == root->val)
            {
                vec.push_back(root->val);
                path.push_back(vec);
            }
            return;
        }
        vector<int> ans = vec;
        vec.push_back(root->val);
        ans.push_back(root->val);
        hasPathSum(root->right, targetSum-root->val, vec) ;
        hasPathSum(root->left, targetSum-root->val, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        hasPathSum(root, targetSum, {});
        return path;
    }
};
