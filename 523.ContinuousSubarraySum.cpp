//Simple Approach
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0] = -1;

        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            int target = sum%k;

            if(mp.find(target) == mp.end())
            mp[target] = i;
            else if(i-mp[target] >= 2)
            return true;
        }
        return false;
    }
};