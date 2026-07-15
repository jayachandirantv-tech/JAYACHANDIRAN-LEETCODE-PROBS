class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int esum=0;
       int odsum=0;
       for(int in=1;in<=2*n;in++)
       {
        if(in%2==0)
        {
            esum+=in;
        }
        else
        {
            odsum+=in;
        }
       }
       int a,b;
     
    a = esum;
    b = odsum;
    
    
       while(b!=0)
       {
        int rem=a%b;
        a=b;
        b=rem;
       }
       return a;

        
    }
};