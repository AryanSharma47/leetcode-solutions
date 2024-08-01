//Easy Approach || Simple Logic using Hash Table
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> v;

        for(auto i : nums)
          count[i]++;

        for(const auto& ind : count)
        {
            if(ind.second == 2)
            v.push_back(ind.first);
        }
        return v;
    }
};

//Second Approach Using integers Range
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;

        for(int i=0;i<nums.size();i++)
        {
            int ind=abs(nums[i])-1;
            if(nums[ind] < 0)
            v.push_back(ind+1);
            else
            nums[ind]*=-1;
        }
        return v;
    }
};