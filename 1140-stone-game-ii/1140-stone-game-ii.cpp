class Solution {
    int solve(vector<int>& piles,int ind,int M,vector<vector<int>>& memo,vector<int>dp,int N){
           if(memo[ind][M]!=-1){
            return memo[ind][M];
           }
           if(ind+2*M>=N){
            return memo[ind][M]=dp[ind];
           }
           int in=1;
           int ans=0;
            while(ind<=N && in<=2*M && ind+in<=N ){
                int newM=max(in,M);
                int temp=dp[ind]-solve(piles,ind+in,newM,memo,dp,N);
                ans=max(ans,temp);
                in++;
            }
            return memo[ind][M]=ans;
    }
public:
    int stoneGameII(vector<int>& piles) {
       int M=1;
       int N=piles.size();
       vector<vector<int>>memo(N,vector<int>(N+1,-1));
       vector<int>dp(N);
       dp[N-1]=piles[N-1];
       for(int in=N-2;in>=0 ;in--) dp[in]=dp[in+1]+piles[in];

       return solve(piles,0,M,memo,dp,N);
    }
};