// Last updated: 7/20/2026, 12:02:10 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(nums[mid]==target)
            return mid;

        else if(nums[mid]<target)
            low=mid+1;

        else
            high=mid-1;
    }

    return low;
    }
};