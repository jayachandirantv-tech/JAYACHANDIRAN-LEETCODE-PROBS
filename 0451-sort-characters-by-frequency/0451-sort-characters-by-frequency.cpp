class Solution {
public:
    string frequencySort(string s) {
        int N=s.size();
        unordered_map<char,int>mp;
        set<char>st;
        for(int in=0;in<N;in++){
            mp[s[in]]++;
            st.insert(s[in]);
        }
        priority_queue<pair<int,char>>q;
        for(auto ch:st){
            q.push({mp[ch],ch});
        }
        string res="";
        while(!q.empty()){
            auto[occur,ch]=q.top();
            q.pop();
           res+=string(occur,ch);
        }
    return res;
    }
};