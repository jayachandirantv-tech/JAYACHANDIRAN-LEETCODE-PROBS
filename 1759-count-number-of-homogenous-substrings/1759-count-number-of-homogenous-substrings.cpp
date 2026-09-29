class Solution {
public:
    int countHomogenous(string s) {
    int N=s.size();
    vector<long long>prefsum(s.size()+1);
    long long sum=0;
    long long count=0;
    const int MOD = 1000000007;
     for(int in=0;in<N;in++){
        if(in>0 && s[in]==s[in-1]){
            count++;
        }
        else{
            count=1;
        }
        sum=(sum+count)%MOD;
     }
     return sum;
    }
};