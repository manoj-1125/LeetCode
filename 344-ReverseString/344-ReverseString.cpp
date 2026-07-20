// Last updated: 7/20/2026, 10:21:05 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
    }
};