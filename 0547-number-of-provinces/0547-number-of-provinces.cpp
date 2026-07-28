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
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       int R=isConnected.size();
       int C=R;
       vector<int>leader(R+1);
       for(int in=1;in<=R;in++)
       {
        leader[in]=in;
       }
       for(int r=0;r<R;r++)
       {
        for(int c=0;c<C;c++)
        {
            if(isConnected[r][c]==1)
            {
               leader[find(leader,c+1)]=find(leader,r+1);
            }
        }
       }
      unordered_map<int,int>mp;
      for(int in=1;in<=R;in++)
      {
        mp[find(leader,in)]++;
      }
      return mp.size();
    }
};