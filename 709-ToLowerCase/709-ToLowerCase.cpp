// Last updated: 9/4/2026, 11:56:43 PM
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