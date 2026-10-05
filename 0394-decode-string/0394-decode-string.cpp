class Solution {
public:
    string decodeString(string s) {
      stack<int>numst;
      stack<string>strst;
      string curr="";
      int num=0;
      for(int in=0;in<s.size();in++){
        if(isdigit(s[in])){
            num=num*10+(s[in]-'0');
        }
        else if(s[in]=='['){
            strst.push(curr);
            numst.push(num);
            curr="";
            num=0;
        }
        else if(s[in]==']'){
            int times=numst.top();
            numst.pop();

            string prev=strst.top();
            strst.pop();
            
            string temp="";

            for(int itr=0;itr<times;itr++){
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