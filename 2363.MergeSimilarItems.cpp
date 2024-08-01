//Simple Logic
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& it1, vector<vector<int>>& it2) {
        map<int,int> mp;
        vector<vector<int>> ans;

        for(int i=0;i<it1.size();i++)
        mp[it1[i][0]] += it1[i][1];

        for(int j=0;j<it2.size();j++)
        mp[it2[j][0]] += it2[j][1];

        for(auto num : mp)
        ans.push_back({num.first,num.second});

        return ans;
    }
};