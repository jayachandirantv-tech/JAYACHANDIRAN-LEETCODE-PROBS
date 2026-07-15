class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int maxval=0;
        for(int r=0;r<R;r++)
        {
            for(int c=0;c<C;c++)
            {
                if(c+2<grid[r].size() && r+2<grid.size())
                {
                int sum=0;
                sum+=grid[r][c]+grid[r][c+1]+grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]+grid[r+2][c+1]+grid[r+2][c+2];
                 maxval=max(maxval,sum);
            }
            }
        }
        return maxval;
    }
};