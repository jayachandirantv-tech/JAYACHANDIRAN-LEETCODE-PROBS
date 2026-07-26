class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int r=0;r<numRows;r++)
        {
            vector<int>tempr;
         for(int c=0;c<=r;c++)
         {
            if(c==0 ||c==r)
            {
              tempr.push_back(1);
              continue;
            }
            int sum=(pascal[r-1][c-1]+pascal[r-1][c]);
            tempr.push_back(sum);
         }
         pascal.push_back(tempr);    
        }
        return pascal;
    }
};