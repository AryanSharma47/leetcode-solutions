//Simple Approach
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int max = *max_element(candies.begin(),candies.end());
        int n = candies.size();
        vector<bool> ans(n,false);

        for(int i=0;i<n;i++)
        {
            if(candies[i]+extra >= max)
            ans[i] = true;
        }
        return ans;
    }
};