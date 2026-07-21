// Last updated: 7/21/2026, 6:15:35 PM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if('A'<=s[i] && s[i]<='Z')
                s[i]+=32;
        }
        return s;
    }
};