class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        int sum=0;
        vector<int>freq;
        int count=1;
        int size=0;
        for(auto ch:word){
            mp[ch]++;
        }
        string fin;
        sort(word.begin(),word.end());
        for(int in=0;in<word.size();in++){
            if(in>0 && word[in]==word[in-1]) continue;
            freq.push_back(mp[word[in]]);
        }
        sort(freq.begin(),freq.end(),greater<int>());
       /*
       prioriy_queue<pair<int,char>,vector<pair<int,char>>>
        for(int in=0;in<fin.size();in++){
           mul q.push({mp[fin[in]],f[in]})
        }
        */
        for(int in=0;in<freq.size();in++){
           if(size>=8){
            size=size/8;
            count++;
            size--;
           }
           sum+=(freq[in]*count);
           size++;
        }
    return sum;
    }
};