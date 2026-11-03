class Solution {
    const int MOD = 1e9 + 7;
    int dr[2]={0,1};
    int dc[2]={1,0};
    int dfs (vector<vector<int>>& grid,vector<vector<int>>& path,int r,int c){
        int R=grid.size();
        int C=grid[0].size();
        if(r==R-1 && c==C-1){
            return 1;
        }
        if(path[r][c]!=-1){
            return path[r][c];
        }
        long long count=0;
        for(int in=0;in<2;in++){
           int nr=r+dr[in];
           int nc=c+dc[in];
        
           if(nr<0 || nr>=R || nc<0 ||nc>=C)  continue;
           int temp=in;
           while(nr>=0 && nr<R && nc>=0 && nc<C && grid[nr][nc]==1){
               if(temp==1){
                nr=nr+dr[0];
                nc=nc+dc[0];
                temp=0;
               }
               else{
                nr=nr+dr[1];
                nc=nc+dc[1];
                temp=1;
               }
           }
             if(nr<0||nr>=R || nc<0 || nc>=C){
                continue;
            }
           count=(count+dfs(grid,path,nr,nc))%MOD;
        }
        return path[r][c]=count;
    }
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>path(R,vector<int>(C,-1));
        return dfs(grid,path,0,0);

    }
};