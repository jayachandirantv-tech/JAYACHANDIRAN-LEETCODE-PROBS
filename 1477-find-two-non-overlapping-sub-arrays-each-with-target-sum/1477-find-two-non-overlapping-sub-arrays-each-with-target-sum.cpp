class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
     int N=arr.size();
     int left=0;
     int ans=INT_MAX;
     int sum=0;
     vector<int>best(N,INT_MAX);
     for(int right=0;right<N;right++){
        sum+=arr[right];
        while(sum>target){
            sum-=arr[left];
            left++;
        }
        if(sum==target){
            int len=right-left+1;
            if(left>0 && best[left-1]!=INT_MAX){
                ans=min(ans,best[left-1]+len);
            }
            best[right]=min(right>0?best[right-1]:INT_MAX,len);
        }
        else{
            best[right]=(right>0?best[right-1]:INT_MAX);
        }
     }
     return ans==INT_MAX?-1:ans;
    }
};