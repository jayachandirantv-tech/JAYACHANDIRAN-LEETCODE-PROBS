class Solution {
unordered_map<int,vector<char>>mp;
void backtrack(string digits,string temp,int ind){
  if(temp.size()==digits.size()){
   res.push_back(temp);
   return;
  }
    int num=digits[ind]-'0';
    for(int itr=0;itr<mp[num].size();itr++){
        temp+=mp[num][itr];
        backtrack(digits,temp,ind+1);
        temp.pop_back();
    }
}
vector<string>res;
void assign(){
    int num=2;
    int count=0;
    for(char ch='a';ch<='z';ch++){
        if(count==3 && num!=7){
            count=0;
            num++;
        }
        if(num==7 && count==3){
            mp[num].push_back(ch);
            count=0;
            num++;
            continue;
        }
         mp[num].push_back(ch);
         count++;
    }
    mp[9].push_back('z');
}
public:
    vector<string> letterCombinations(string digits) {
        int size=digits.size();
        assign();
        string temp="";
        int ind=0;
        backtrack(digits,temp,ind);
        return res;
    }
};