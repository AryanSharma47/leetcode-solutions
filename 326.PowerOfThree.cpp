//First Approach using Log
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        return false;

        double ans=log10(n)/log10(3);
        
        return (ans==(int)ans);
    }
};


//Second Approach using Recursion
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
        return true;

        if(n%3!=0 || n<=0)
        return false;
        
        return isPowerOfThree(n/3);
    }
};