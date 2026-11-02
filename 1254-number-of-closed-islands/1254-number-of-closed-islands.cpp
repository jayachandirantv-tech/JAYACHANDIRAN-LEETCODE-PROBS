class Solution {
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,vector<vector<int>>& group,int r,int c){
        int R=grid.size();
        int C=grid[0].size();
        for(int in=0;in<4;in++){
            int nr=r+dr[in];
            int nc=c+dc[in];
            if(nr<0 || nr>=R||nc<0 || nc>=C|| visited[nr][nc]==1||grid[nr][nc]==1){
                continue;
            }
            visited[nr][nc]=1;
            group[nr][nc]=group[r][c];
            dfs(grid,visited,group,nr,nc);
        }
        return;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int gno=0;
        vector<vector<int>>visited(R,vector<int>(C,0));
        vector<vector<int>>group(R,vector<int>(C,0));
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]==0 && visited[r][c]==0){
               if(r==0 || r==R-1 || c==0 || c==C-1){
                visited[r][c]=1;
                group[r][c]=-1;
                dfs(grid,visited,group,r,c);
            }
        }
    }
    }
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(grid[r][c]==0 && visited[r][c]==0){
              group[r][c]=++gno;
              dfs(grid,visited,group,r,c);
            }
        }
    }
    return gno;
    }
};