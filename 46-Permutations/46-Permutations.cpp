// Last updated: 7/20/2026, 12:01:57 AM
class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& ans,vector<int>& currList, vector<bool>& used){
        if(currList.size()==nums.size()){
        ans.push_back(currList);
        return;
        }
            for(int j=0;j<nums.size();j++){
                if(used[j])
                    continue;
                currList.push_back(nums[j]);
                used[j]=true;
                backtrack(nums, ans, currList, used);
                used[j]=false;
                currList.pop_back();
            }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>currList;
        vector<bool> used(nums.size(),false);
        backtrack(nums, ans, currList, used);
        return ans;
    }
};