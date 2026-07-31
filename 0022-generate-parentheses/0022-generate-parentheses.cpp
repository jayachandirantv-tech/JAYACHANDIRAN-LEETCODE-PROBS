class Solution {
    string temp="(";
    vector<string>res;
    vector<char>sym={'(',')'};
    char open='(';
    char close=')';
    void solve(int n,unordered_map<char,int>& mp){
        if(temp.size()==n*2 ){
            res.push_back(temp);
          return;
          }
        for(int in=0;in<2;in++)
        {
           if(mp[sym[in]]<n){
            if((sym[in]==')' && mp[close]<mp[open])||sym[in]=='('){
            mp[sym[in]]++;
            temp+=sym[in];
            solve(n,mp);
            temp.pop_back();
            mp[sym[in]]--;
            }
        }
    }
    }
public:
    vector<string> generateParenthesis(int n) {
      unordered_map<char,int>mp;
      mp['(']=1;
       solve(n,mp); 
       return res;
    }
};