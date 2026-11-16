class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string comb="";
            int in=0;
            int sum=0;
            int count=0;
            while(in<s.size()){
             if(count<=k){
                sum=sum+(s[in]-'0');
                count++;
             }
                if(count==k){
                    count=0;
                    comb+=to_string(sum);
                    sum=0;
                }
             in++;
            }
            if(count>0){
                comb+=to_string(sum);
            }
           s=comb;
        }
        return s;
    }
};