//Simple Approach
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        map<vector<int>,int> rows;

        for(int i=0;i<grid.size();i++)
        rows[grid[i]]++;

        for(int i=0;i<grid.size();i++)
        {
            vector<int> cols;

            for(int j=0;j<grid[0].size();j++)
            cols.push_back(grid[j][i]);

            count += rows[cols];
        }
        return count;
    }
};