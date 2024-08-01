//Easiest Approach
class Solution {
public:
    int sumOfDigits(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=pow((n%10),2);
            n/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n==1)
        return true;
        else
        {
            while(n!=1)
            {
                n=sumOfDigits(n);
                if(n==4)
                return false;
                else if(n==1)
                return true;
            }
            return true;
        }
    }
};