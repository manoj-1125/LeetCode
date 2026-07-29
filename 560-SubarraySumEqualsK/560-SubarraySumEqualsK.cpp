// Last updated: 7/29/2026, 5:31:29 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int prefixSum=0,cnt=0;
        for(int num : nums){
            prefixSum+=num;
            int remove=prefixSum-k;
            if(map.find(remove)!=map.end())
                cnt+=map[remove];
            map[prefixSum]++;
        }
        return cnt;
    }
};