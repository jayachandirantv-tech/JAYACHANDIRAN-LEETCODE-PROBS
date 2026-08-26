class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left=0;
        int right=0;
        unordered_map<int,vector<string>>store;
        unordered_map<int,int>mp;
        int minlen=INT_MAX;
       while(right<s.size()){
          if(s[right]=='1'){
            mp['1']++;
        }
         right++;
        while(mp['1']>k){
            if(s[left]=='1'){
            mp['1']--;
            }
        left++;
        }
    if(mp['1']==k){

    while(left<right && s[left]=='0'){
        left++;
    }
    int len=right-left;
    if(len<minlen){
        minlen=len;
        store[minlen].clear();
        string temp=s.substr(left,len);
        store[minlen].push_back(temp);
    }
    else if(len==minlen){
        string temp=s.substr(left,len);
        store[minlen].push_back(temp);
    }
}
}
if(minlen==INT_MAX){
    return "";
}
        string init=store[minlen][0];
        for(int in=1;in<store[minlen].size();in++){
             for(int itr=0;itr<minlen;itr++){
                if(init[itr]==store[minlen][in][itr]){
                continue;
                }
                else if(init[itr]>store[minlen][in][itr]){
                    init=store[minlen][in];
                    break;
                }
                else{
                    break;
                }
             }
        }
        return init;
    }
};