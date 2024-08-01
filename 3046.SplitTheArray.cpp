//Easiest Approach using Hash Table
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i : nums)
        mp[i]++;

        for(const auto& i : mp)
            if(i.second > 2)
            return false;
        
        return true;
    }
};