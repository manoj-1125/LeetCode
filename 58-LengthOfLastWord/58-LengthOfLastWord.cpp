// Last updated: 7/23/2026, 10:45:44 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;bool word=false;
        for(int i=s.size()-1;i>=0;i--){
            if (s[i] != ' ') {
                word = true;
                count++;
            } else {
                if (word) 
                    break;
            }
        }
        return count;
    }
};