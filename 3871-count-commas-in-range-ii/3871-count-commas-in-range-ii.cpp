class Solution {
public:
    long long countCommas(long long n) {
    if(n<1000){
        return 0;
    }
  long long st=1000;
  long long commas=0;
  while(n>=st){
      commas+=(n-st+1);
      st=st*1000;
  }
return commas;
    }
};