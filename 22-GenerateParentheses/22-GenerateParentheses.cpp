// Last updated: 8/16/2026, 6:57:29 PM
class Solution {
public:
 void generate(int n, string current, int open, int close, vector<string>& ans) {
        if (open == n && close==n) {
            ans.push_back(current);
            return;
        }
        if(open<n)
            generate(n,current+'(',open+1,close,ans);
        if(close<open)
            generate(n,current+')',open,close+1,ans);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(n, "", 0, 0, ans);
        return ans;  
    }
};