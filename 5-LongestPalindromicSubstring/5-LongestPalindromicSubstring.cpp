// Last updated: 8/5/2026, 1:55:02 PM
class Solution {
public:
    void expand(string &s, int left, int right, int &start, int &maxLen){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            if((right-left+1) > maxLen){
                maxLen=right-left+1;
                start=left;
            }
            left--;
            right++;
        } 
    }
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1)
            return s;
        int start=0;
        int maxLen=1;
        for(int i=0;i<n;i++){
            expand(s,i,i,start,maxLen);
            expand(s,i,i+1,start,maxLen);
        }
        return s.substr(start,maxLen);
    }
};