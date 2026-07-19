// Last updated: 7/20/2026, 12:02:09 AM
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
                currList.push_back(candidates[j]);
                backtrack(j, candidates, remaining-candidates[j]);
                currList.pop_back();
            }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        backtrack(0, candidates, target);
        return ans;
    }
};