//Simplest Approach || Beats 100% Users || Using Recursion
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<1)
       return false;
       if(n==1)
       return true;
       if(n%2!=0)
       return false;
       else
       return isPowerOfTwo(n/2);
    }
};