class Solution {
    int dr[4]={0,1,0,-1};
    int dc[4]={1,0,-1,0};
    int count=2;
public:
   void gen(vector<vector<int>>& matrix,vector<vector<int>>& visited,int r,int c,int dir){
    int N=matrix.size();
    if(count==((N*N)+1)){
        return;
    }
    int nr=r+dr[dir];
    int nc=c+dc[dir];
    if(nr<0 || nr>=N || nc<0 || nc>=N || visited[nr][nc]==1){
        dir=(dir+1)%4;
        nr=r+dr[dir];
        nc=c+dc[dir];
    }
    matrix[nr][nc]=count;
    visited[nr][nc]=1;
    count++;
    gen(matrix,visited,nr,nc,dir);
   }
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>visited(n,vector<int>(n,0));
    vector<vector<int>>matrix(n,vector<int>(n,0));
    matrix[0][0]=1;
    visited[0][0]=1;
    gen(matrix,visited,0,0,0);
    return matrix;
    }
};