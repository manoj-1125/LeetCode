// Last updated: 9/4/2026, 11:54:21 PM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        for(int i=0;i<n-1;i++){
            int max=i;
            for(int j=i+1;j<n;j++){
                if(heights[j]>heights[max])
                    max=j;
            }
            if(max!=i){
            swap(heights[i],heights[max]);
            swap(names[i],names[max]);
            }
        }
        return names;
    }
};