//Optimal Approach
//Moore's Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0,ele = -1,n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(maj == 0)
            {
                ele = nums[i];
                maj = 1;
            }
            else
            {
                if(nums[i] == ele)
                maj++;
                else
                maj--;
            }
        }
        return ele;
    }
};

//Second Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//Third Approach
//Using Map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();

        for(auto i : nums)
        mp[i]++;

        for(auto j : mp)
        {
            if(j.second > n/2)
            return j.first;
        }
        return -1;
    }
};