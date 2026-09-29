class Solution {
    vector<vector<vector<int>>>dp;
    int dr[2]={1,0};
    int dc[2]={0,1};
    bool dfs(vector<vector<char>>& grid,int r,int c,int balance){
        int R=grid.size();
        int C=grid[0].size();
         if(balance<0) return false;
        if(r==R-1 && c==C-1){
           return balance==0;
        }
        if(dp[r][c][balance]!=-1){
            return dp[r][c][balance];
        }
        for(int in=0;in<2;in++){
          int nr=r+dr[in];
          int nc=c+dc[in];
          if(nr<0 || nr>=R || nc<0 || nc>=C){
            continue;
          }
          int newbalance=balance;
          // to check whether the char is (  or  )
          if(grid[nr][nc]=='('){
            newbalance++;
          }
          else{
            newbalance--;
          }
          if(dfs(grid,nr,nc,newbalance)){
            return dp[r][c][balance]=1;
          }
        }
        return dp[r][c][balance]=0;
    }
public:
    bool hasValidPath(vector<vector<char>>& grid) {
     int R=grid.size();
     int C=grid[0].size();
      // the end or the starting cant be like this
     if(grid[0][0]==')' || grid[R-1][C-1]=='(') return false;
      
     // similarly now need to check whether even moves are present in order to cancel all in the stack

     if((R+C)%2==0){
        return false;
     }
     // it is used to access all the elements separately
     dp.assign(R,vector<vector<int>>(C,vector<int>(R+C+1,-1)));

     // now need to do the traversal thing and find the answer
     return dfs(grid,0,0,1);

    }
};