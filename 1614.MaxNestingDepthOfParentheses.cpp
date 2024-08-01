//Simple Approach
class Solution {
public:
    int maxDepth(string s) {
        int maxCount=0,count=0;

        for(auto c : s)
        {
            if(c == '(')
            count++;
            
            maxCount=max(count,maxCount);

            if(c == ')')
            count--;
        }
        return maxCount;
    }
};