// Last updated: 7/19/2026, 11:59:44 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size(), m = s2.size();
        if (n > m)
            return false;
        vector<int> freq1(26);
        vector<int> freq2(26);
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        if (freq1 == freq2)
                return true;
        
        while (right < m-1) {
            
            freq2[s2[left] - 'a']--;
            left++;
            right++;
            freq2[s2[right] - 'a']++;
            if (freq1 == freq2)
                return true;
        }
        return false;
    }
};