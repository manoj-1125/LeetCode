// Last updated: 7/20/2026, 12:00:03 AM
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
    unordered_map<long long, int> mp;

    int dfs(TreeNode* root, long long currSum, int targetSum) {
        if (root == NULL)
            return 0;
        currSum += root->val;
        int count = mp[currSum - targetSum];
        mp[currSum]++;
        count += dfs(root->left, currSum, targetSum);
        count += dfs(root->right, currSum, targetSum);

        mp[currSum]--;
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        mp[0]=1;
        return dfs(root,0,targetSum);
    }
};