class Solution {
public:
    int maxDepth(string s) {
        int N=s.size();
        int maxval=0;
        int curr=0;
        for(int in=0;in<N;in++){
             if(s[in]=='('){
                curr++;
               maxval=max(maxval,curr);
             }
             else if(s[in]==')'){
                curr--;
             }
        }
        return maxval;
    }
};