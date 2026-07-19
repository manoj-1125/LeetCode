// Last updated: 7/20/2026, 12:00:40 AM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};