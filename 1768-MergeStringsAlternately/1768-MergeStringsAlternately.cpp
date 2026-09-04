// Last updated: 9/4/2026, 11:54:52 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans;
        int n=word1.size(),m=word2.size();
        ans.reserve(n+m);
        while(i<n && j<m){
            ans+=word1[i++];
            ans+=word2[j++];
        }
        while(i<n || j<m){
            if(i<n) ans+=word1[i++];
            if(j<m) ans+=word2[j++];
        }
        return ans;
    }
};