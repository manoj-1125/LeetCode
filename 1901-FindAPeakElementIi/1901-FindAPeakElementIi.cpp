// Last updated: 9/4/2026, 11:54:36 PM
class Solution {
public:
    int findmaxrowindex(vector<vector<int>>& mat, int n, int col){
        int maxval=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxval){
                maxval=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0, high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int maxrowindex=findmaxrowindex(mat,n,mid);
            int left=mid-1>=0 ? mat[maxrowindex][mid-1] : -1;
            int right=mid+1<m ? mat[maxrowindex][mid+1] : -1;
            if(mat[maxrowindex][mid]>left && mat[maxrowindex][mid]>right)
                return {maxrowindex, mid};
            else if(mat[maxrowindex][mid]<left)
                high=mid-1;
            else
                low=mid+1;
        }
        return {-1,-1};
    }
};