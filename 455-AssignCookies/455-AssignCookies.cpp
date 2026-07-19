// Last updated: 7/19/2026, 11:59:57 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size(),m=s.size();
        int i=0,j=0,count=0;
        while(i<n && j<m){
            if(g[i]<=s[j]){
                i++;
                j++;count++;
            }else
                j++;
        }
        return count;
    }
};