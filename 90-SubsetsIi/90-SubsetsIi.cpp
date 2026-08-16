// Last updated: 8/16/2026, 6:56:54 PM
class Solution {
public:  
    void helper(vector<int>& nums, int index, vector<int>& currList, vector<vector<int>>& ans){
     
        ans.push_back(currList);

        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1])
                continue;
            currList.push_back(nums[i]);
            helper(nums, i+1, currList, ans);
            currList.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>currList;
        sort(nums.begin(),nums.end());
        helper(nums, 0, currList, ans);
        return ans;
    }
};