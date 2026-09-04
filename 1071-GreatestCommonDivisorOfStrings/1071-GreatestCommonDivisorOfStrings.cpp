// Last updated: 9/4/2026, 11:56:03 PM
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
            return "";
        int gcd_len=gcd(str1.size(),str2.size());
        return str1.substr(0,gcd_len);
    }
};