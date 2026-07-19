// Last updated: 7/20/2026, 12:00:02 AM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if(m>n)
            return {};
        vector<int> indices;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int left = 0, right = m - 1;
        for (int i = 0; i < m; i++) {
            freq1[s[i] - 'a']++;
            freq2[p[i] - 'a']++;
        }

        if (freq1 == freq2)
            indices.push_back(0);

        while (right < n - 1) {

            freq1[s[left] - 'a']--;
            left++;
            right++;
            freq1[s[right] - 'a']++;
            if (freq1 == freq2)
                indices.push_back(left);
        }
        return indices;
    }
};