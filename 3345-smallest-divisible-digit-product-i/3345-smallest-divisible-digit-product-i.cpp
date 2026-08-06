class Solution {
public:
    int smallestNumber(int n, int t) {
        int N=INT_MAX;
        for(int in=n;in<N;in++){
            int cpy=in;
            int prod=1;
            while(cpy>0){
                int dig=cpy%10;
                prod=prod*dig;
                cpy=cpy/10;
            }
            if(prod%t==0){
                return in;
            }
        }
        return -1;
    }
};