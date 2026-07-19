// Last updated: 7/19/2026, 11:59:32 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
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

    return -1;
    }
};