class Solution {
    int solve(vector<int>& piles,int ind,int M,vector<int>& dp,vector<vector<int>>& memo){
        if(memo[ind][M]!=-1){
            return memo[ind][M];
        }
        if(ind+(2*M)>=piles.size()){
            return  memo[ind][M]=dp[ind];
        }
        int ans=0;
        int in=1;
        while(in<=piles.size() && in<=2*M && ind+in<=piles.size()){
            int newM=max(M,in);
            int temp=dp[ind]-solve(piles,ind+in,newM,dp,memo);
            ans=max(ans,temp);
            in++;
        }
        return memo[ind][M]=ans;
    }
public:
    int stoneGameII(vector<int>& piles) {
       int M=1;
       vector<vector<int>>memo(piles.size(),vector<int>(piles.size()+1,-1));
       vector<int>dp(piles.size(),0);
       dp[piles.size()-1]=piles[piles.size()-1];
       for(int in=piles.size()-2;in>=0 ;in--){
            dp[in]=dp[in+1]+piles[in];
       }
       return solve(piles,0,M,dp,memo);
    }
};