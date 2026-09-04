// Last updated: 9/4/2026, 11:56:14 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;
        string ans;
        for(auto c : s){
            if(c == '('){
                if(balance>0)
                    ans+=c;
                balance++;
            }
            else{
                balance--;
                if(balance>0)
                    ans+=c;
            }
        }
        return ans;
    }
};