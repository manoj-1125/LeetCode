// Last updated: 8/4/2026, 9:45:07 PM
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