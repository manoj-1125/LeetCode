// Last updated: 8/4/2026, 9:16:59 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size(),m=t.size();
        if(m!=n)
            return false;
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        for(int i=0;i<n;i++){
            if(map1.find(s[i]) == map1.end() && map2.find(t[i]) == map2.end()){
                map1[s[i]]=t[i];
                map2[t[i]]=s[i];
            }
            else if(map1[s[i]]!=t[i] || map2[t[i]]!=s[i])
                return false;
        }
        return true;
    }
};