class Solution {
    int pr=0;
    int pc=0;
    vector<int> check(vector<vector<char>>& grid,vector<vector<int>>& visited,int r,int c){
        int R=grid.size();
        int C=grid[0].size();
        if(r>=R || c>=C ||r<0 || c<0){
            return{pr,pc};
        }
        if(visited[r][c]==1){
            return{pr,pc};
        }
        visited[r][c]=1;
        pr=r;
        pc=c;
            if(grid[r][c]=='R'){
                check(grid,visited,r,c+1);
            }
            else if(grid[r][c]=='L'){
                check(grid,visited,r,c-1);
            }
            else if(grid[r][c]=='U'){
                check(grid,visited,r-1,c);
            }
            else{
                check(grid,visited,r+1,c);
            }
            return {pr,pc};
        }
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>visited(R,vector<int>(C,0));
        return check(grid,visited,0,0);
    }
};