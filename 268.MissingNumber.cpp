//First Approach Using sort function
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0,n = nums.size();
        sort(nums.begin(),nums.end());

        if(n == 1 && nums[0] != 1)
        return 1;
        if(nums[n-1] != n)
        return n;

        for(int i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1]+1)
            return nums[i-1]+1;
        }
        return 0;
    }
};


//Second Approach using XOR
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0,n = nums.size();
        for(int i=0;i<=n;i++)
        ans ^= i;

        for(auto i : nums)
        ans ^= i;

        return ans;
    }
};