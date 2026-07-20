// Last updated: 7/20/2026, 10:22:22 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('  || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty())
                return false;

            else if((s[i]==')' && st.top()=='(')||
                    (s[i]==']' && st.top()=='[')||
                    (s[i]=='}' && st.top()=='{'))
                    st.pop();
                    
            else return false;
            }
        }
        return st.empty();
    }
};