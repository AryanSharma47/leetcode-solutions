//Simple Approach
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0,right = 0;
        int ans = 0,zeroes = 0;
        while(right < nums.size())
        {
            if(nums[right] == 0)
            zeroes++;

            if(zeroes > 1)
            {
                if(nums[left] == 0)
                zeroes--;

                left++;
            }
            ans = max(ans,right-left);
            right++;
        }
        return ans;
    }
};