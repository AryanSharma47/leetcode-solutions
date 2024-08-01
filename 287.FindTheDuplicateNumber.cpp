//First Approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        
        while(l<r)
        {
            int mid=l+(r-l)/2;
            int count=0;

            for(auto i : nums)
            {
                if(i <= mid)
                count++;
            }

            if(count > mid)
            r=mid;
            else
            l=mid+1;
        }
        return l;
    }
};

//Second Approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums)
        mp[i]++;

        for(auto num : mp)
        {
            if(num.second > 1)
            return num.first;
        }
        return -1;
    }
};