//Easiest Approach  || Simple Logic
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        
        int leftProduct=1;
        for(int i=1;i<n;i++)
        {
            leftProduct*=nums[i-1];
            ans[i]*=leftProduct;
        }

        int rightProduct=1;
        for(int i=n-2;i>=0;i--)
        {
            rightProduct*=nums[i+1];
            ans[i]*=rightProduct;
        }
        return ans;
    }
};