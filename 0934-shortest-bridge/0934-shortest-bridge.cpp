class Solution {
public:
int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};
queue<pair<int,int>>q;
int flips=0;
void group(vector<vector<int>>& grid,vector<vector<int>>& visited){
    int R=grid.size();
    int C=grid[0].size();
    queue<pair<int,int>>temp;
    temp.push(q.front());
    while(!temp.empty()){
        auto[r,c]=temp.front();
        visited[r][c]=1;
        temp.pop();
        for(int in=0;in<4;in++){
            int nr=r+dr[in];
            int nc=c+dc[in];
            if(nr<0 || nr>=R ||nc<0 || nc>=C){
                continue;
            }
            if(visited[nr][nc]==1){
                continue;
            }
            if(grid[nr][nc]==1){
                visited[nr][nc]=1;
                temp.push({nr,nc});
            }
        }
    }
     for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(visited[r][c]==1){
                q.push({r,c});
            }
        }
    }
    while(!q.empty()){
        int sz=q.size();
        while(sz--){
            auto[r,c]=q.front();
            q.pop();
            for(int in=0;in<4;in++){
                int nr=r+dr[in];
                int nc=c+dc[in];
                if(nr<0 || nr>=R ||nc<0 ||nc>=C){
                    continue;
                }
                if(visited[nr][nc]==1){
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
void tofind(vector<vector<int>>& grid){
    int R=grid.size();
    int C=grid[0].size();
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
        if(grid[r][c]==1){
            q.push({r,c});
            return;
    }
}
    }
}
    int shortestBridge(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        tofind(grid);
        if(q.empty()){
            return 0;
        }
        vector<vector<int>>visited(R,vector<int>(C,0));
        group(grid,visited);
        return flips;
    }
};