// Last updated: 7/20/2026, 12:00:37 AM
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> currList;
    void backtrack(int start, int k, int remaining) {
        if (currList.size() == k) {
            if (remaining == 0)
                ans.push_back(currList);
            return;
        } else if (remaining < 0)
            return;
        for (int j = start; j < 10; j++) {
            if (j > remaining)
                break;
            currList.push_back(j);
            backtrack(j + 1, k, remaining - j);
            currList.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1, k, n);
        return ans;
    }
};