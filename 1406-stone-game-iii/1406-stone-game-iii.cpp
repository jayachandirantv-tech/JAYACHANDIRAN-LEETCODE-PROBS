class Solution {
    int solve(vector<int>& stonevalues,vector<int>& dp,int ind,int N){
        if(ind>=N){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int in=1;
        int temp=0;
        int ans=INT_MIN;
        while(ind<=N && ind+in<=N && in<=3){
            temp+=stonevalues[ind+in-1];
            dp[ind]=ans;
            ans=max(ans,temp-solve(stonevalues,dp,ind+in,N));
            in++;
        }
        return dp[ind]=ans;
    }
public:
    string stoneGameIII(vector<int>& stonevalues) {
      int N=stonevalues.size();
      vector<int>memo(N,-1);
      int ans=solve(stonevalues,memo,0,N);
      if(ans>0) return "Alice";
      else if(ans<0) return "Bob";
      return "Tie";
    }
};