//First Approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;

        for(int i=0;i<nums.size()-1;)
        {
            if(nums[i] == nums[i+1])
            nums.erase(nums.begin()+i+1);
            else
            i++;
        }
        return nums.size();
    }
};


//Second Approach 
//Using unique() of STL and resize
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;

        auto it = unique(nums.begin(),nums.end());
        nums.resize(it-nums.begin());
        return nums.size();
    }
};