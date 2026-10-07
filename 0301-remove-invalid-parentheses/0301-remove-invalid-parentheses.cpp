class Solution {
    int unmatchopen=0;
    int unmatchclose=0;
    string temp="";
    unordered_set<string>res;
    void tofind(string s){
        int balance=0;
        for(auto ch:s){
            if(ch=='('){
                balance++;
            }
            else if(ch==')'){
                if(balance>0){
                    balance--;
                }
                else{
                  unmatchclose++;
                }
            }
        }
        unmatchopen=balance;
        return;
    }
    void gen(string &s,int in,int balance){
        int N=s.size();
          if(in>=N){
            if(unmatchopen==0 && unmatchclose==0 && balance==0){
                res.insert(temp);
            }
            return;
          }
          char ch=s[in];
          if(ch=='('){
            // keep the open braces
            temp.push_back(ch);
            gen(s,in+1,balance+1);
            temp.pop_back();
            
            // remove the open braces;
            if(unmatchopen>0){
            unmatchopen--;
            gen(s,in+1,balance);
            unmatchopen++;
          }
          }
          else if(ch==')'){
            if(balance>0){
            // keep the close braces
            temp.push_back(ch);
            gen(s,in+1,balance-1);
            temp.pop_back();
            }
            if(unmatchclose>0){
            // remove the close braces
            unmatchclose--;
            gen(s,in+1,balance);
            unmatchclose++;
          }
          }
          else{
            // for the char present in the string
            temp.push_back(ch);
            gen(s,in+1,balance);
            temp.pop_back();
          }
    }

public:
    vector<string> removeInvalidParentheses(string s) {
        tofind(s);
        gen(s,0,0);
        vector<string>ans;
        for(auto str:res){
            ans.push_back(str);
        }
        return ans;

    }
};