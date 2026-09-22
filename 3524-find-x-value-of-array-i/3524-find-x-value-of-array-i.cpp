class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
      int N=nums.size();
      vector<long long>res(k,0);
      vector<long long>prev(k,0);
      for(auto num:nums){
       // to store the curr values or the number of the elements with the resp rem
       vector<long long>curr(k,0);
        int rem=num%k;
        curr[rem]++;

        for(int r=0;r<k;r++){
           // all the remainder possibilites that can be formed by multiply with curr
            int newrem=(r*rem)%k;

            // if the prev exists than the curr is a valid subarray
            curr[newrem]+=prev[r];
        }
        for(int r=0;r<k;r++){
            res[r]+=curr[r];
        }
         prev=curr;
      }
      return res;
    }
};