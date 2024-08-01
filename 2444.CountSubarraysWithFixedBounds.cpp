//Simple Approach
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minIndex=-1,maxIndex=-1,j=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < minK || nums[i] > maxK)
            j=i;
            if(nums[i] == minK)
            minIndex=i;
            if(nums[i] == maxK)
            maxIndex=i;

            ans+=max(0,min(minIndex,maxIndex)-j);
        }
        return ans;
    }
};