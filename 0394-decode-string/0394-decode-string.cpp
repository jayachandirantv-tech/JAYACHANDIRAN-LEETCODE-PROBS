class Solution {
public:
    string decodeString(string s) {
        stack<string>strst;
        stack<int>numst;
        int num=0;
        string curr="";
        for(int in=0;in<s.size();in++){
            if(isdigit(s[in])){
                num=num*10+(s[in]-'0');
            }
            else if(s[in]=='['){
                numst.push(num);
                strst.push(curr);
                num=0;
                curr="";
            }
            else if(s[in]==']'){
              int mul=numst.top();
              numst.pop();

              string prev=strst.top();
              strst.pop();
               string temp="";
              for(int in=0;in<mul;in++){
                 temp+=curr;
              }
              curr=prev+temp;
            }
            else{
                curr+=s[in];
            }
            
        }
        return curr;
    }
};