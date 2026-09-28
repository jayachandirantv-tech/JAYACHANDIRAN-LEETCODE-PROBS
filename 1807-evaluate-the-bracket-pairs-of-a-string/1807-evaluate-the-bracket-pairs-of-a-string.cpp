class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
     int N=s.size();
     unordered_map<string,string>mp;
     for(int r=0;r<knowledge.size();r++){
        string key=knowledge[r][0];
        string value=knowledge[r][1];
        mp[key]=value;
     }
     string res="";
     for(int in=0;in<N;in++){
        string temp="";
       if(s[in]=='('){
        in++;
        while(s[in]!=')'){
         temp+=s[in];
         in++;
        }
        if(mp.find(temp)!=mp.end()){
           res+=mp[temp];
        }
        else{
            res+='?';
        }
        continue;
       }
       res+=s[in];
     }
     return res;
    }
};