class Solution {
// delete function used to delete the number and move the other number back
void del(vector<int>& nums,int ind,int size){
    for(int in=ind;in<size-1;in++){
        nums[in]=nums[in+1];
    }
    return;
}
public:
    int removeDuplicates(vector<int>& nums) {
        int N=nums.size();
        unordered_map<int,int>mp;
        for(int in=0;in<N;in++){
            mp[nums[in]]++;
            if(mp[nums[in]]>2){
               del(nums,in,N);
               nums.pop_back();
               N=nums.size();
               in--;
            }
        }
        return nums.size();
    }
};