// Last updated: 7/20/2026, 12:02:34 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int curlen=0,maxlen=0,n=s.size(),left=0;
        unordered_map<char,int> last_index;
        for(int right=0;right<n;right++){
            if(last_index.count(s[right]))
                left=max(left,last_index[s[right]]+1);
            last_index[s[right]]=right;
            curlen=right-left+1;
            maxlen=max(maxlen,curlen);
            
        }
    return maxlen;
    }
};