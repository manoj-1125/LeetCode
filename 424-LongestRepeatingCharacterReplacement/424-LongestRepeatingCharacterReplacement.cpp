// Last updated: 7/20/2026, 12:00:05 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxFreq=0,ans=0,left=0;
        for (int right=0;right<s.size();right++)
        {
            
            freq[s[right]-'A']++;
            maxFreq = max(maxFreq, freq[s[right]-'A']);
            while ((right-left+1) - maxFreq > k) {
                freq[s[left]-'A']--;
                left++;  
            }
            
            ans = max(ans, (right-left+1));
        }
        return ans;
    }
};