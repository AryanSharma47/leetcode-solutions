//Easiest Approach using Bit Manipulation || Beats 100% Users
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n)
        {
            c+=1&n;
            n>>=1;
        }
        return c;
    }
};