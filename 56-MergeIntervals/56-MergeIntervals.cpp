// Last updated: 7/20/2026, 12:01:51 AM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++)
        {
            // overlap?
            if(intervals[i][0]<=ans.back()[1])
            {
                // merge
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};