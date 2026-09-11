class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
     unordered_set<int>st;
        int N=digits.size();
        for(int in=0;in<N;in++){
            if(digits[in]==0) continue;
            for(int itr=0;itr<N;itr++){
                if(itr==in) continue;
                for(int ctr=0;ctr<N;ctr++){
                    if(ctr==itr || ctr==in )  continue;
                     if(digits[ctr]%2==0){
                        int res=digits[in]*100+digits[itr]*10+digits[ctr];
                        st.insert(res);
                     }
                }
            }
        }
        vector<int>res;
        for(auto num:st){
            res.push_back(num);
        }
        sort(res.begin(),res.end());
        return res;
    }
};