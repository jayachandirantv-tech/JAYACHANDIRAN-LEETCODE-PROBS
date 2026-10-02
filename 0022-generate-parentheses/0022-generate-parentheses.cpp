class Solution {
    string temp="(";
    vector<string>res;
    vector<char>sym={'(' ,')'};
    char open='(',close=')';
    unordered_map<char,int>mp;
    void gen(int n){
        if(temp.size()==n*2){
            res.push_back(temp);
            return;
        }
        for(int in=0;in<2;in++){
            if((sym[in]==open && mp[open]<n) ||(sym[in]==close && mp[close]<mp[open])){
                temp.push_back(sym[in]);
                mp[sym[in]]++;
                gen(n);
                mp[sym[in]]--;
                temp.pop_back();
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
       mp[open]++;
       gen(n);
       return res;
    }
};