class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int N=bills.size();
        unordered_map<int,int>mp;
        for(int in=0;in<N;in++){
            if(bills[in]==5){
                mp[bills[in]]++;
                continue;
            }
            int change=bills[in]-5;
            if(change==15){
                if( (mp[5]>0 && mp[10]>0) ){
                  mp[5]--;
                  mp[10]--;
                }
                else if( mp[5]>=3 ){
                    mp[5]--; mp[5]--; mp[5]--;
                }
                else{
                    return false;
                }
                mp[20]++;
            }
            else if(change==5){
                if(mp[change]>0){
                    mp[change]--;
                }
                else{
                    return false;
                }
                mp[10]++;
            }
            
        }
        return true;
    }
};