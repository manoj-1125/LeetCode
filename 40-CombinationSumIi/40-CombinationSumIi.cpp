// Last updated: 7/20/2026, 12:02:06 AM
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>currList;
    void backtrack(int start, vector<int>& candidates, int remaining){
        if(remaining == 0){
            ans.push_back(currList);
            return;
        }else if(remaining < 0)
            return;
            for(int j=start;j<candidates.size();j++){
                if(j>start && candidates[j]==candidates[j-1])
                    continue;
                currList.push_back(candidates[j]);
                backtrack(j+1, candidates, remaining-candidates[j]);
                currList.pop_back();
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(0, candidates, target);
        return ans;
    }
};