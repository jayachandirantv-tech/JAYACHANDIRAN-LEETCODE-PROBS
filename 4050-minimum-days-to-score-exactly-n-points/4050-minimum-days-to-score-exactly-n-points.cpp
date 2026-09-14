class Solution {
public:
    int minDays(int N) {
      vector<int>dp(N+1,INT_MAX);
      dp[0]=0;
      for(int in=0;in<=N;in++){
        if(dp[in]==INT_MAX) continue;
        for(int series=1;in+series*(series+1)/2<=N;series++){
            int days=series;
            int score=series*(series+1)/2;
            if(in!=0) days++;
            dp[in+score]=min(dp[in+score],dp[in]+days);
        }
      }
      return dp[N];
    }
};