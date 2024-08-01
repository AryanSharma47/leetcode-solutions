//Easiest Approach Using Hash Table
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>> mp;

        for(auto i : str)
        {
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto j : mp)
            ans.push_back(j.second);
        
        return ans;
    }
};