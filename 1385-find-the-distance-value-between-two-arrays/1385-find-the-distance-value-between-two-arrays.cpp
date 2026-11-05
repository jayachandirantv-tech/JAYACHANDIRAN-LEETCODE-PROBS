class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       int N1=arr1.size();
       int N2=arr2.size();
       int count=0;
       bool found=true;
       for(int in=0;in<N1;in++){
        for(int itr=0;itr<N2;itr++){
            if(abs(arr1[in]-arr2[itr])<=d){
               found=false;
            }
        }
        if(found==true){
          count++;
        }
        found=true;
       } 
       return count;
    }
};