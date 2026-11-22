class Solution {
public:
    int minRange(int a, int b, int c) {
      if(a==b&& b==c){
      return 0;
      }
      vector<int>nums;
      nums.push_back(a);
      nums.push_back(b);
      nums.push_back(c);
      sort(nums.begin(),nums.end());
      a=nums[0];
      b=nums[1];
      c=nums[2];
      if(a+b>=c){
        return (c-a); 
      }  
      else{
        return(a+b-a);
      }
    }
};