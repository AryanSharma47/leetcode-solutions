//Simple Approach
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp,mp2;

        for(auto i : arr)
        mp[i]++;

        for(auto i : mp)
        mp2[i.second]++;

        for(auto j : mp2)
        {
            if(j.second > 1)
            return false;
        }
        return true;
    }
};