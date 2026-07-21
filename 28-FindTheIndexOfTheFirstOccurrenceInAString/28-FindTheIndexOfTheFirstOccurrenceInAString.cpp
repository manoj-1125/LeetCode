// Last updated: 7/21/2026, 6:16:55 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=haystack.size(),m=needle.size();
       if(m>n)
        return -1;
       for(int i=0;i<=n-m;i++){
            int j=0;
            while(j<m && needle[j]==haystack[i+j])
                j++;
            if(j==m)
                return i;
       } 
       return -1;
    }
};