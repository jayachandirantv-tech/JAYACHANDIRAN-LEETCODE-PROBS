class Solution {
public:
    int minimumPushes(string word) {
        int N=word.size();
        int sum=0;
        int count=1;
        while(N>8)
        {
           sum+=(8*count);
           N=N-8;
           count++;
        }
        if(N==0)
        {
            return sum;
        }
        else{
            sum+=(N*count);
        }
return sum;

        
    }
};