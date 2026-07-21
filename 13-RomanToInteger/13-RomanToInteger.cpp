// Last updated: 7/21/2026, 6:17:00 PM
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romanMap={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int n=s.size();
        if(n==1)
            return romanMap[s[0]];
        int intvalue=0;
        for(int i=0;i<n;i++){
            if(i+1<n && romanMap[s[i]]<romanMap[s[i+1]])
                intvalue-=romanMap[s[i]];
            else
                intvalue+=romanMap[s[i]];
        }
        return intvalue;
    }
};