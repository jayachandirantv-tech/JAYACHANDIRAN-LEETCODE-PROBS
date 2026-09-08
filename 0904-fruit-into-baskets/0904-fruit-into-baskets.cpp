class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int N=fruits.size();
        int left=0,right=0;
        unordered_map<int,int>mp;
        int maxlen=INT_MIN;
        while(right<N && left>=0){
          mp[fruits[right]]++;
          right++;
        while(left>=0 && left<=right && mp.size()>2){
             maxlen=max(maxlen,right-left-1);
             mp[fruits[left]]--;
             if(mp[fruits[left]]==0){
                mp.erase(fruits[left]);
             }
             left++;
        }
        }
        maxlen=max(maxlen,right-left);
        return maxlen;
    }
};