// Last updated: 7/20/2026, 12:01:07 AM
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
   
    void dfs(TreeNode* root,vector<int>& path,vector<vector<int>>& ans,int remaining){
        if(root==NULL)
            return;
        path.push_back(root->val);
        remaining-=root->val;
        if(root->left==NULL && root->right==NULL){
            if(remaining==0){
                ans.push_back(path);
            path.pop_back();
            return;
            }
        }
        dfs(root->left,path,ans,remaining);
        dfs(root->right,path,ans,remaining);
        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return {};
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root,path,ans,targetSum);
        return ans;
    }
};