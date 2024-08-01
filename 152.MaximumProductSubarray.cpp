//Simple Approach
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double pre = 1,suf = 1;
        double n = nums.size(),ans = INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(pre  == 0)  
            pre = 1;
            if(suf == 0) 
            suf = 1;

            pre *= nums[i];
            suf *= nums[n-i-1];

            ans = max(ans,max(pre,suf));
        }
        return (int)ans;
    }
};