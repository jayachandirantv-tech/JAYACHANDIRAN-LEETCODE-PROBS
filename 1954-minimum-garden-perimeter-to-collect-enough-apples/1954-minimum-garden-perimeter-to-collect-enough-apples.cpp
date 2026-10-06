class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
       long long peri=0;
       for(long long in=0;in<=100000000;in++){
        if((2LL*in*(in+1)*(2LL*in+1))>=neededApples){
            peri=in;
            break;
        }
       }
       return peri*8;
    }
};