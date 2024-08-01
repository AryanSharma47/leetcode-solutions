//Easy Approach using Hash Table
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=0,r=0,res=0;

        while(l < nums.size() && r < nums.size())
        {
            mp[nums[r]]++;
            while(mp[nums[r]] > k)
            {
                mp[nums[l]]--;
                l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
  }
};
