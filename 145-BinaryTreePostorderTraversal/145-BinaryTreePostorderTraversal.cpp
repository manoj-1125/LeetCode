// Last updated: 7/20/2026, 12:00:56 AM
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
    vector<int> list; 
    void postorder(TreeNode* root){
        if(root==NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        list.push_back(root->val);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return list;
    }
};