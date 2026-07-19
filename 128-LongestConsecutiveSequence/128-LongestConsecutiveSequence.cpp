// Last updated: 7/20/2026, 12:01:01 AM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : st) {
            // Start only if it's the beginning of sequence
            if (st.find(num - 1) == st.end()) {
                int current = num;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                maxLen = max(maxLen, length);
            }
        }

        return maxLen;
    }
};