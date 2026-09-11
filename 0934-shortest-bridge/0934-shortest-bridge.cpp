class Solution {
public:
queue<pair<int,int>>q;
int flips=0;
int dr[4]={1,-1,0,0};
int dc[4]={0,0,-1,1};
void group(vector<vector<int>>& grid,vector<vector<int>>& visited){
    int R=grid.size();
    int C=grid[0].size();
    while(!q.empty()){
      int sz=q.size();
      while(sz--){
        auto[r,c]=q.front();
        q.pop();
         for(int in=0;in<4;in++){
            int nr=r+dr[in];
            int nc=c+dc[in];
            
            if(nr<0 ||nr>=R || nc<0 ||nc>=C || visited[nr][nc]==1){
                continue;
            }
            if(grid[nr][nc]==1){
                return;
            }
            visited[nr][nc]=1;
            q.push({nr,nc});
        }
      }
      flips++;
    }
}
void tofind(vector<vector<int>>& grid,vector<vector<int>>& visited){
    int R=grid.size();
    int C=grid[0].size();
    queue<pair<int,int>>temp;
    bool found=false;
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(grid[r][c]==1){
                temp.push({r,c});
                q.push({r,c});
                visited[r][c]=1;
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    while(!temp.empty()){
        auto[r,c]=temp.front();
        temp.pop();
        for(int in=0;in<4;in++){
            int nr=r+dr[in];
            int nc=c+dc[in];
            
            if(nr<0 ||nr>=R || nc<0 ||nc>=C || visited[nr][nc]==1){
                continue;
            }
            if(grid[nr][nc]==1){
                visited[nr][nc]=1;
                q.push({nr,nc});
                temp.push({nr,nc});
            }
        }
    }
}
    int shortestBridge(vector<vector<int>>& grid) {
      int R=grid.size();
      int C=grid[0].size();
      vector<vector<int>>visited(R,vector<int>(C,0));
      tofind(grid,visited);
      group(grid,visited);
      return flips;
    }
};