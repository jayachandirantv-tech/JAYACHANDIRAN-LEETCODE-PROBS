class Solution {
public:
    int countHomogenous(string s) {
    int N=s.size();
    vector<long long>prefsum(s.size()+1);
    prefsum[0]=0;
    for(int in=1;in<=N;in++){
        prefsum[in]=in+prefsum[in-1];
    }
    long long sum=0;
     for(int in=0;in<N;in++){
        int itr=in+1;
        int count=1;
        while(itr<N && s[itr]==s[in]){
           count++;
           itr++;
        }
      sum=(sum+prefsum[count])%1000000007;
      in=itr-1;
     }
     return sum;
    }
};