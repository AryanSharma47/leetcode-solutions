//Easiest Approach || Using Hash Table
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> mp;
        vector<string> ans;

        for(int i=0;i<heights.size();i++)
          mp[heights[i]]=names[i];
        
        sort(heights.begin(),heights.end(),greater<int> ());

        for(const auto &num : heights)
            ans.push_back(mp[num]);
        
        return ans;
    }
};