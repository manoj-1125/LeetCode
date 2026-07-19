// Last updated: 7/20/2026, 12:01:32 AM
class Solution {
public:
    
    void backtrack(int start, vector<int>& nums,vector<vector<int>>& ans,vector<int>& currList){
        ans.push_back(currList);
        
            for(int j=start;j<nums.size();j++){
                currList.push_back(nums[j]);
                backtrack(j+1, nums, ans, currList);
                currList.pop_back();
            }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>currList;
        backtrack(0, nums, ans, currList);
        return ans;
    }
};