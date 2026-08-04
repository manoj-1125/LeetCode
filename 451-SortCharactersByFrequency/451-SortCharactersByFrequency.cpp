// Last updated: 8/4/2026, 10:23:58 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;
        int n = s.size();
        vector<vector<char>> bucket(n + 1);
        for (auto &p : freq)
            bucket[p.second].push_back(p.first);
        string ans;
        for (int i = n; i >= 1; i--) {
            for (char c : bucket[i]) {
                ans.append(i, c);
            }
        }
        return ans;
    }
};