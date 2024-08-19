//Simple Approach
// TC : O(n)
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int small = arrays[0][0];
        int big = arrays[0].back();
        int ans = INT_MIN;

        for(int i=1;i<arrays.size();i++)
        {
            ans = max(ans,abs(arrays[i].back()-small));
            ans = max(ans,abs(big-arrays[i][0]));
            small = min(small,arrays[i][0]);
            big = max(big,arrays[i].back());
        }
        return ans;
    }
};