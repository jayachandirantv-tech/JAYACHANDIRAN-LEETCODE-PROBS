class Solution {
public:
    bool checkValidString(string s) {
        int N=s.size();
        int close=0;
        int open=0;
        for(int in=0;in<N;in++){
            if(s[in]=='('){
                close++;
                open++;
            }
            else if(s[in]==')'){
                close--;
                open--;
            }
            else{
                close--;
                open++;
            }
            if(close<0){
             close=0;
            }
            if(open<0) return false;
        }
        if(close==0){
            return true;
        }
        else{
            return false;
        }
    }
};