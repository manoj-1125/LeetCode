// Last updated: 7/20/2026, 7:20:16 PM
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
    TreeNode* prev=NULL;
    int ans=INT_MAX;
    void inorder(TreeNode* current){
        if(current==NULL)
            return;
        
        inorder(current->left);
        if(prev!=NULL)
            ans=min(ans,current->val-prev->val);
        prev=current;
        inorder(current->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};