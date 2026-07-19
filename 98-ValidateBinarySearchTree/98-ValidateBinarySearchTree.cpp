// Last updated: 7/20/2026, 12:01:24 AM
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
    bool isvalid(TreeNode* root, long long low, long long high){
        if(root==NULL)
            return true;
        if(root->val<=low||root->val>=high)
            return false;
        bool left=isvalid(root->left,low,root->val);
        bool right=isvalid(root->right,root->val,high);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        return isvalid(root,LLONG_MIN,LLONG_MAX);
    }
};