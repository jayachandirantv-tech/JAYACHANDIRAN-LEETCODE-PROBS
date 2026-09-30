class Solution {
    vector<vector<int>>dp;
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>dp(R,vector<int>(C,0));
        if(grid[0][0]==1){
            return 0;
        }
        dp[0][0]=1;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]!=1){
                int lr=r,lc=c-1;
                int ur=r-1,uc=c;
                if(r>0  && c>0){
                    dp[r][c]=dp[lr][lc]+dp[ur][uc];
                   }
                   else if(r==0){
                    if(c==0){
                        continue;
                    }
                    dp[r][c]=dp[lr][lc];     
                   }
                   else if(c==0){
                    if(r==0){
                        continue;
                    }
                    dp[r][c]=dp[ur][uc];
                   }
                }
            }
        }
             return dp[R-1][C-1];
        }
};