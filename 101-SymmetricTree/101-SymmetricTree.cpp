// Last updated: 7/20/2026, 12:01:22 AM
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
    bool isMirror(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        bool left=isMirror(p->left,q->right);
        bool right=isMirror(p->right,q->left);
        return left && right;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return isMirror(root->left,root->right);
    }
};