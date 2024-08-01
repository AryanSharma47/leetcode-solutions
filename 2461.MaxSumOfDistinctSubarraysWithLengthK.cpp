//Sliding Window Approach
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        long long sum=0,maxSum=0;
        int n=nums.size();

        for(int i=0;i<k;i++)
        {
            mp[nums[i]]++;
            sum += nums[i];
        }
        
        if(mp.size() == k)
        maxSum = max(sum,maxSum);

        for(int i=k;i<n;i++)
        {
            sum -= nums[i-k];

            if(--mp[nums[i-k]] == 0)
            mp.erase(nums[i-k]);

            sum += nums[i];
            mp[nums[i]]++;

            if(mp.size() == k)
            maxSum = max(sum,maxSum);
        }
        return maxSum;
    }
};