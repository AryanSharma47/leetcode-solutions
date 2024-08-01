//Simple Approach || Using Hash Table
class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
       unordered_map<int,int> mp;
       int c=0;
       int ans=0;
       mp[0]=-1;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==1)
        c++;
        else
        c--;

        if(mp.find(c)!=mp.end())
        ans=max(ans,i-mp[c]);
        else
        mp[c]=i;
       }
       return ans;
    }
};