// Last updated: 8/4/2026, 6:00:58 PM
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.size();
        reverse(s.begin(),s.end());
        int idx=0,end=0;
        for(int start=0;start<n;start++){
            if(s[start]!=' '){
                if(idx!=0)
                    s[idx++]=' ';
            end=start;
            while(end<n && s[end]!=' ')
                s[idx++]=s[end++];
            reverse(s.begin()+idx-(end-start),s.begin()+idx);
            start=end;
            }
        }
        s.erase(s.begin()+idx,s.end());
        return s;
    }
};