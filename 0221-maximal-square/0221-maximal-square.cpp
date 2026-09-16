class Solution {
    int ans=0;
    void check(int r,int c,vector<vector<int>>& dp,int add){
        int R=dp.size();
        int size=add;
         for(int i=0;i<size && r+i<R;i++){
            if(dp[r+i][c]<size){
                return;
            }
        }
        if(r+size<=R){
            ans=max(ans,size);
        }
    }
    void sq(vector<vector<char>>& matrix,vector<vector<int>>& dp){
        int R=matrix.size();
        int C=matrix[0].size();
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                for(int size=dp[r][c];size>ans;size--){
                check(r,c,dp,size);
            }
        }
    }
    }
    void calc(vector<vector<char>>& grid,vector<vector<int>>& dp){
       int R=grid.size();
       int C=grid[0].size();
       for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(grid[r][c]=='1'){
                if(c>0 && grid[r][c-1]=='1'){
                    dp[r][c]+=dp[r][c-1]+1;
                }
                else{
                    dp[r][c]=1;
                }
            }
        }
       }
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int R=matrix.size();
        int C=matrix[0].size();
        vector<vector<int>>dp(R,vector<int>(C,0));
        calc(matrix,dp);
        sq(matrix,dp);
        return ans*ans;
    }
};