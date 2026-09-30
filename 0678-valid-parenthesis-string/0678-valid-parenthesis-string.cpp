class Solution {
public:
    bool checkValidString(string s) {
        int N=s.size();
        // if we change the * to the ) close symbol the minimum unbalance decreases so we use this
        int mn=0;
        // similarly if we change the * to ( then the unbalace increases so we use this
        int mx=0;
        for(int in=0;in<N;in++){
            if(s[in]=='('){
                mn++;
                mx++;
            }
            else if(s[in]==')'){
                mn--;
                mx--;
            }
            else{
                mx++;
                mn--;
            }
            if(mn<0){
                mn=0;
            }
            if(mx<0){
                return false;
            }
        }
        return mn==0;
    }
};