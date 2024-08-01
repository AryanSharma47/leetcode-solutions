//Beats 100% Users|| Best Approach
class Solution {
public:
    int pivotInteger(int n) {
       int sum1=0,sum2=0;
       for(int i=n;i>=1;i--)
       {
           sum1=i*(i+1)/2;
           sum2+=i;
           if(sum1==sum2)
           return i;
       } 
       return -1;
    }
};