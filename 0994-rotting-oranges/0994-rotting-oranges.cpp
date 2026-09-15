class Solution {
    int dr[4]={1,-1,0,0};
    int dc[4]={0,0,-1,1};
    queue<pair<int,int>>q;
    int count=-1;

    void bfs(vector<vector<int>>& grid,vector<vector<int>>& visited){
    int R=grid.size();
    int C=grid[0].size();
    while(!q.empty()){
        count++;
        int size=q.size();
        while(size--){
           auto[r,c]=q.front();
           q.pop();
           for(int in=0;in<4;in++){
            int nr=r+dr[in];
            int nc=c+dc[in];
            if(nr<0 || nr>=R || nc<0 ||nc>=C ||visited[nr][nc]==1||grid[nr][nc]==0){
                continue;
            }
            visited[nr][nc]=1;
            q.push(make_pair(nr,nc));
           }
        }
    }
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int R=grid.size();
    int C=grid[0].size();
    vector<vector<int>>visited(R,vector<int>(C,0));
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(grid[r][c]==2){
                q.push(make_pair(r,c));
                visited[r][c]=1;
            }
        }
    }
    bfs(grid,visited);
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(grid[r][c]==1 && visited[r][c]==0){
                return -1;
            }
        }
    }
    if(count==-1){
        return 0;
    }
     return count;
    }
};