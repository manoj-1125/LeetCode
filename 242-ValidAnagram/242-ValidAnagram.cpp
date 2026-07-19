// Last updated: 7/20/2026, 12:00:20 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        int n=s.size(),m=t.size();
        if(n!=m)
            return false;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        for(int i=0;i<n;i++){
            freq[t[i]]--;
            if(freq[t[i]]<0)
                return false;
        }
        return true;
    }
};