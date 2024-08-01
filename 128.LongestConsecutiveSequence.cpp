//First Approach || TC : O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int longest=0;
        
        for(auto num : nums)
        mp[num]++;

        for(auto num : nums)
        {
            if(mp.find(num-1) == mp.end())
            {
                int curr=num;
                int streak=0;

                while(mp.find(curr) != mp.end())
                {
                    curr++;
                    streak++;
                }

                longest=max(longest,streak);
            }
        }
        return longest;
    }
};

//Second Approach || TC :O(nLogn)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longest=1,streak=1;
        if(nums.size()==0)
        return 0;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] !=nums[i+1])
            {
            if(nums[i]+1 == nums[i+1])
            {
             streak++;
            }
            else
            {
                longest=max(longest,streak);
                streak=1;
            }
            }
        }
        return max(longest,streak);
    }
};