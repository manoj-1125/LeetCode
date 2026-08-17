// Last updated: 8/17/2026, 11:23:25 PM
class Solution {
public:
    void helper(string &digits, int index, string &curr,
                vector<string> &ans, vector<string> &mapping) {
        if (index == digits.size()) {
            ans.push_back(curr);
            return;
        }
        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            curr.push_back(c);
            helper(digits, index + 1, curr, ans, mapping);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string curr;
        helper(digits, 0, curr, ans, mapping);
        return ans;
    }
};