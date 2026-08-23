class Solution {
public:
    bool isPalindromic(string s) {
        string res;
        for(auto &ch:s){
            int asci=ch;
            string temp;
            for(int in=0;in<8;in++){
              int bit=asci&1;
              temp=to_string(bit)+temp;
              asci=asci>>1;
            }
            res=res+temp;
        }
        for(int in=0;in<res.size()/2;in++){
            if(res[in]==res[res.size()-in-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};