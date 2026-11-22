class Solution {
public:
    bool checkString(string s) {
        bool bcame=0;
        for(int in=0;in<s.size();in++){
          if(s[in]=='a'){
            if(bcame){
              return false;
            }
          }
            else{
            bcame=1;
            }
        }
        return true;
    }
};