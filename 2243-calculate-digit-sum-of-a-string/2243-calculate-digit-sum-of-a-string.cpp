class Solution {
public:
    string digitSum(string s, int k) {
       while(s.size()>k){
          int sum=0;
          string comb="";
          int count=0;
          int in=0;
          while(in<s.size()){
            if(count<k){
                sum+=(s[in]-'0');
                count++;
            }
            if(count==k){
                comb+=to_string(sum);
                count=0;
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