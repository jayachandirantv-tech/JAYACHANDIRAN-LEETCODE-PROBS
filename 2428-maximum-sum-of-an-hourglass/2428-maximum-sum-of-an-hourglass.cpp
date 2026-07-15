class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int maxsum=0;
        int R=grid.size();
        int C=grid[0].size();
        for(int r=0;r<R;r++)
        {
            for(int c=0;c<C;c++)
            {
                int sum=0;
                if(r+2<grid.size() && c+2<grid[r].size())
                {
                   sum+=grid[r][c]+grid[r][c+1]+grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]+grid[r+2][c+1]+grid[r+2][c+2];
                }
                maxsum=max(maxsum,sum);
            }
        }
        return maxsum;
        
    }
};