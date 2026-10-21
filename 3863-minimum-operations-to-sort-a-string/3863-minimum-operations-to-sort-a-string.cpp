class Solution {
    char mn='z';
    char mx='a';
    void tofind(string s){
        for(int in=0;in<s.size();in++){
            mn=min(mn,s[in]);
            mx=max(mx,s[in]);
        }
    }
public:
    int minOperations(string s) {
        string temp=s;
        sort(temp.begin(),temp.end());
        if(temp==s){
            return 0;
        }
        int N=s.size();
        tofind(s);
        if(N==2 && s[0]==mx && s[1]==mn) return -1;
        if(s[0]==mn || s[N-1]==mx){
            return 1;
        }
        for(int in=1;in<N-1;in++){
            if(s[in]==mn || s[in]==mx){
                return 2;
            }
        }
    return 3;
    }
};                                                             