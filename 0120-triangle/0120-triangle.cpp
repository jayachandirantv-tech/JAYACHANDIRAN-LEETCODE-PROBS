class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int R=triangle.size();
        vector<vector<int>>dp;
        for(int r=0;r<R;r++)
        {
            int C=triangle[r].size();
            vector<int>temp(C,INT_MAX);
            dp.push_back(temp);
            vector<vector<int>>diff={{-1,0},{-1,-1}};
            for(int c=0;c<C;c++)
            {
                if(r==0 && c==0)
                {
                   dp[r][c]=triangle[r][c];
                   continue;
                }
                else if(r>0)
                {
                    for(auto dc:diff){
                        auto nr=r+dc[0];
                        auto nc=c+dc[1];
                        if(nr>=0 && nr<R && nc>=0 && nc<triangle[nr].size())
                        {
                            dp[r][c]=min(dp[nr][nc]+triangle[r][c],dp[r][c]);
                        }
                    }
                }
            }
        }
        int minv=INT_MAX;
        for(int c=0;c<triangle[R-1].size();c++)
        {
            minv=min(minv,dp[R-1][c]);
        }
        return minv;
    }
};