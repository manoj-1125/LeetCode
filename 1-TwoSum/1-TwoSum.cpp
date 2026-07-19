// Last updated: 7/20/2026, 12:02:37 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end())
                return {mp[complement],i};
            mp[nums[i]]=i;
        }
        return {-1,1};
    }
};