class Solution {
public:
    bool canAliceWin(int n) {
        int in=0;
        int count=10;
        while(n>=0 && in<20){
          if(n<count){
            break;
          }
          in++;
          n=n-count;
          count--;
        }
        return (in%2==0)?0:1;
    }
};