class Solution {
public:
    int myAtoi(string s) {
    int already=0;
    long fin=0;
    int sign=1;
     int N=s.size();
     int spc=0;
     for(auto &ch:s){
        if(ch==' ' && spc==0 && already==0){
            continue;
        }
        else if((ch=='-' && already!=1) ||(ch=='+' && already!=1)){
            already=1;
            sign=(ch=='-')?-1:1;
            continue;
        }
        if(!isdigit(ch)){
            break;
        }
        else{
            already=1;
            fin=fin*10+ch-'0';
            spc=1;
            if(sign==1 && fin>INT_MAX){
                return INT_MAX;
            }
            if(sign==-1 && -fin<INT_MIN){
            return INT_MIN;
            }
        }
        
     }
     return fin*sign;
    }
};