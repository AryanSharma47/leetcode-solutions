//Simple Approach Using Hash Table

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;

       for(int i=0;i<nums.size();i++)
       {
        int ans = target-nums[i];
        if(mp.find(ans) != mp.end())
        return {mp[ans],i};
        else
        mp[nums[i]] = i;
       } 
       return {};
    }
};