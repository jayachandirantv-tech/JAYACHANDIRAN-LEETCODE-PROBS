class Solution {
void solve(vector<vector<int>>& matrix,vector<vector<int>>& visited,int R,int C,int r,int c,int count,vector<int>& res,int dir)
{
    visited[r][c]=1;
    res.push_back(matrix[r][c]);
    count++;

    if(count==R*C){
        return;
    }
    int dr[4]={0,1,0,-1};
    int dc[4]={1,0,-1,0};
    int nr=r+dr[dir];
    int nc=c+dc[dir];
    if(nr<0 || nr>=R || nc<0 ||nc>=C || visited[nr][nc])
    {
        dir=(dir+1)%4;
        nr=r+dr[dir];
        nc=c+dc[dir];
    }
    solve(matrix,visited,R,C,nr,nc,count,res,dir);
}

public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int R=matrix.size();
       int C=matrix[0].size();
       int count=0;
       vector<vector<int>>visited(R,vector<int>(C,0));
       vector<int>res;
       solve(matrix,visited,R,C,0,0,count,res,0);
       return res;
    }
};