// Last updated: 7/20/2026, 12:02:27 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0,i=0,j=n-1,width,area;
        while(i<j){
            width=j-i;
            area=width*min(height[i],height[j]);
            maxarea=max(maxarea,area);
            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return maxarea;
    }
};