class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int in=0,itr=0;
       while(in<s.size() && itr<g.size()){
           if(s[in]>=g[itr]){
            count++;
            itr++;
           }
           in++;
       }
        return count;
    }
};