// Last updated: 9/4/2026, 11:56:31 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        s+=s;
        if(s.find(goal)!=string::npos)
            return true;
        return false;
    }
};