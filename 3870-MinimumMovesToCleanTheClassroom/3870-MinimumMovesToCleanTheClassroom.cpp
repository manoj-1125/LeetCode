// Last updated: 9/2/2026, 11:18:17 PM
class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m=classroom.size(), n=classroom[0].size(), k=0, sr, sc;

        vector<vector<int>> id(m,vector<int>(n,-1));
        for(int i=0;i<m;i++) for(int j=0;j<n;j++){
            if(classroom[i][j]=='S') sr=i,sc=j;
            if(classroom[i][j]=='L') id[i][j]=k++;
        }

        int M=1<<k;
        vector<bool> vis(m*n*(energy+1)*M);
        auto idx=[&](int r,int c,int e,int mask){
            return (((r*n+c)*(energy+1)+e)*M+mask);
        };

        queue<array<int,4>> q;
        q.push({sr,sc,energy,0});
        vis[idx(sr,sc,energy,0)]=1;

        int dr[]={1,-1,0,0}, dc[]={0,0,1,-1};

        for(int ans=0;!q.empty();ans++){
            int sz=q.size();
            while(sz--){
                auto [r,c,e,mask]=q.front(); q.pop();

                if(mask==M-1) return ans;
                if(!e) continue;

                for(int d=0;d<4;d++){
                    int nr=r+dr[d], nc=c+dc[d];
                    if(nr<0||nr>=m||nc<0||nc>=n||classroom[nr][nc]=='X') continue;

                    int ne=e-1, nm=mask;
                    if(classroom[nr][nc]=='R') ne=energy;
                    if(classroom[nr][nc]=='L') nm|=1<<id[nr][nc];

                    int z=idx(nr,nc,ne,nm);
                    if(!vis[z]){
                        vis[z]=1;
                        q.push({nr,nc,ne,nm});
                    }
                }
            }
        }
        return -1;
    }
};