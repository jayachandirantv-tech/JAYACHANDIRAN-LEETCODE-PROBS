class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int N=nums.size();
        int count=0;
        for(int in=0;in<N;in++){
            int even=0,odd=0;
            for(int itr=in;itr<N;itr++){
                if(nums[itr]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
                if(odd==0||(1LL*even*b)>(1LL*a*odd)){
                  continue;
                }
                else{
                    count++;
                }
            }
        }
        return count;
    }
};