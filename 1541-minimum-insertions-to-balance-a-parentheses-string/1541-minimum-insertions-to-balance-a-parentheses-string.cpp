class Solution {
public:
    int minInsertions(string s) {
     int open=0;
     int require=0;
     for(int in=0;in<s.size();in++){
        if(s[in]=='('){
            open++;
        }
        else{
            if(in+1<s.size() && s[in+1]==')'){
                in++;
            }
            else{
                require++;
            }
            if(open>0){
                open--;
            }
            else{
                require++;
            }
        }
     }
     return require+=(open*2);
    }
};