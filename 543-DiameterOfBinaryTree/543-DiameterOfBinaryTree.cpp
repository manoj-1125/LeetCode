// Last updated: 7/19/2026, 11:59:45 PM
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
    int diameter;
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int leftdepth = maxDepth(root->left);
        int rightdepth = maxDepth(root->right);
        diameter=max(diameter,leftdepth+rightdepth);
        return 1 + max(leftdepth, rightdepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return diameter;
    }
};