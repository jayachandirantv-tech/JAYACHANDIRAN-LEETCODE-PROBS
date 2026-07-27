class Solution {
    int find(vector<int>& leader,int Node)
    {
        if(leader[Node]==Node)
        {
            return Node;
        }
        leader[Node]=find(leader,leader[Node]);
        return leader[Node];
    }
    void join(vector<int>& leader,int og,int branch)
    {
        leader[find(leader,branch)]=leader[find(leader,og)];
    }
public:
    int latestDayToCross(int R, int C, vector<vector<int>>& cells) {
      vector<int>leader(R*C+2);
      for(int in=0;in<=R*C+1;in++)
      {
        leader[in]=in;
      }
      vector<bool>water(R*C+2,false);
      int days=0;
      vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}};
      for(auto cell:cells)
      {
         int r=cell[0];
         int c=cell[1];
         r--;
         c--;
         water[r*C+c+1]=true;
         for(auto dc:dir){
            int nr=r+dc[0];
            int nc=c+dc[1];
            if(nr>=0 && nr<R && nc>=0 && nc<C && water[nr*C+nc+1])
            {
                join(leader,r*C+c+1,nr*C+nc+1);
            }
         }
            if(c==0)
            {
                join(leader,0,r*C+1);
            }
            else if(c==C-1)
            {
                join(leader,r*C+C,R*C+1);
            }
            if(find(leader,0)==find(leader,R*C+1))
            {
                break;
            }
            else
            {
                days++;
            }
         }
         return days;
    }
};