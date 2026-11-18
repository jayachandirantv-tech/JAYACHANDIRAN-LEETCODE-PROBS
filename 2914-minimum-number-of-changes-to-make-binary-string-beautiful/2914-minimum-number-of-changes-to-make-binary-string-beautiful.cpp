class Solution {
public:
    int minChanges(string s) {
        int count=0;
      for(int in=0;in<s.size();in+=2){
        if(s[in]!=s[in+1]){
           count++;
        }
      }
      return count;
    }
};