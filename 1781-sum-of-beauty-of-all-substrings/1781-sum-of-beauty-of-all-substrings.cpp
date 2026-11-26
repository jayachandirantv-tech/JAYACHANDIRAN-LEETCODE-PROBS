class Solution {
public:
    int beautySum(string s) {
     int sum=0;
     int N=s.size();
     for(int in=0;in<N;in++){
        vector<int>mp(26,0);
        for(int j=in;j<N;j++){
            
            mp[s[j]-'a']++;
            int minv=INT_MAX;
            int maxv=0;
            for(int itr=0;itr<26;itr++){
                if(mp[itr]>0){
                   maxv=max(maxv,mp[itr]);
                   minv=min(minv,mp[itr]);
                }
            }
            sum+=(maxv-minv);
        }
     }
     return sum;
    }
};