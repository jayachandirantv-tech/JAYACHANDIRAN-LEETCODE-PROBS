class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==1){
            if(citations[0]==0){
                return 0;
            }
            else
            return 1;
        }
        sort(citations.begin(),citations.end());
        int N=citations.size();
        int maxcit=0;
        for(int in=0;in<N;in++){
            int cit=citations[in];
            int rem=N-in;
            if(cit>=rem){
                maxcit=max(maxcit,rem);
            }
        }
        return maxcit;
    }
};