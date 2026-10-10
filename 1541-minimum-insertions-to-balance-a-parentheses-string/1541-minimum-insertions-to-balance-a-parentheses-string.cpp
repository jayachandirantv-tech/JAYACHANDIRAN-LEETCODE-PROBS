class Solution {
public:
    int minInsertions(string s) {
        int N=s.size();
        int open=0;
        int close=0;
        int require=0;
        for(int in=0;in<N;in++){
            if(s[in]=='('){
                open++;
            }
            else{
              if(in+1<N && s[in+1]==')'){
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